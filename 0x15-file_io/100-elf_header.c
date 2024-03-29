#include "main.h"
#include <elf.h>
#include <stdio.h>

void osabi_info(Elf64_Ehdr);
void type_info(Elf64_Ehdr elf_header);
void check_elf(Elf64_Ehdr elf_header);
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of strings of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i = 0, fd, abi;
	char *class = "ELF64";
	char *data = "2's complement, little endian";
	char *version = "1 (current)";
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	read(fd, &elf_header, sizeof(Elf64_Ehdr));
	check_elf(elf_header);
	abi = elf_header.e_ident[EI_ABIVERSION];
	if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
		class = "ELF32";
	if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
		data = "2's complement, big endian";
	if (elf_header.e_ident[EI_VERSION] != 1)
		version = "";
	printf("ELF Header:\n");
	printf("  Magic:   ");
	while (i != EI_NIDENT)
	{
		if (i == EI_NIDENT - 1)
			printf("%02x", elf_header.e_ident[i]);
		else
			printf("%02x ", elf_header.e_ident[i]);
		i++;
	}
	printf("\n");
	printf("  Class:                             %s\n", class);
	printf("  Data:                              %s\n", data);
	printf("  Version:                           %s\n", version);
	osabi_info(elf_header);
	printf("  ABI Version:                       %d\n", abi);
	type_info(elf_header);
	printf("  Entry point address:               0x%x\n",
			(int)elf_header.e_entry);
	return (0);
}

/**
 * osabi_info - print OS/ABI of an ELF header
 * @elf_header: struct of ELF header
 * Return: Nothing
 */
void osabi_info(Elf64_Ehdr elf_header)
{
	printf("  OS/ABI:                            ");
	switch (elf_header.e_ident[EI_OSABI])
	{
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_header.e_ident[EI_OSABI]);
	}
}

/**
 * type_info - prints type of ELF header
 * @elf_header: struct of ELF header
 * Return: Nothing
 */
void type_info(Elf64_Ehdr elf_header)
{
	if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
		elf_header.e_type >>= 8;
	printf("  Type:                              ");
	switch (elf_header.e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_header.e_type);
	}
}

/**
 * check_elf - Checks if a file is an ELF file.
 * @elf_header: struct of ELF header
 * Return: Nothing
 */
void check_elf(Elf64_Ehdr elf_header)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elf_header.e_ident[i] != 127 &&
		    elf_header.e_ident[i] != 'E' &&
		    elf_header.e_ident[i] != 'L' &&
		    elf_header.e_ident[i] != 'F')
			exit(98);
	}
}
