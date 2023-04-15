#include "main.h"
#include <elf.h>
#include <stdio.h>

void osabi_info(Elf64_Ehdr);
void type_info(Elf64_Ehdr elf_header);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of strings of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i = 0, read_size, fd, abi;
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
	read_size = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	abi = elf_header.e_ident[EI_ABIVERSION];
	if (read_size <= 0)
		printf("Eroor: \n");
	if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
		class = "ELF32";
	if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
		data = "2's complement, big endian";
	printf("ELF Header: \n");
	printf("  Magic:   ");
	while (i != EI_NIDENT)
	{
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
	printf("  Entry point address:               %#x\n",
			(unsigned int)elf_header.e_entry);
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
