#include "main.h"
#include <elf.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of strings of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i = 0, read_size, fd;
	char *class = "ELF64";
	char *data = "2's complement, little endian";
	char *version = "1 (current)";
	char *os = "UNIX - System V";
	char *abi = "0";
	char *type = "EXEC (Executable file)";
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	read_size = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (read_size <= 0)
		printf("Eroor: \n");
	if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
		class = "ELF32";
	if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
		data = "2's complement, big endian";
	if (elf_header.e_type == ET_REL)
		type = "REL (Rellocatable file)";
	if (elf_header.e_type == ET_DYN)
		type = "DYN (shared object)";
	printf("ELF Header: \n");
	printf("Magic:   ");
	while (i != EI_NIDENT)
	{
		printf("%02x ", elf_header.e_ident[i]);
		i++;
	}
	printf("\n");
	printf("Class:                             %s\n", class);
	printf("Data:                              %s\n", data);
	printf("Version:                           %s\n", version);
	printf("OS/ABI:                            %s\n", os);
	printf("ABI Version:                       %s\n", abi);
	printf("Type:                              %s\n", type);
	printf("Entry point address:               %ld\n", elf_header.e_entry);
	return (0);
}
