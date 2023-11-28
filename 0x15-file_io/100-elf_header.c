#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>

#define BUFF_SIZE 64

/**
 * display_magic - Display magic numbers from ELF header
 * @e_ident: ELF identification array
 */
void display_magic(unsigned char *e_ident) {
	printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
	       e_ident[EI_MAG0], e_ident[EI_MAG1], e_ident[EI_MAG2], e_ident[EI_MAG3],
	       e_ident[EI_MAG4], e_ident[EI_MAG5], e_ident[EI_MAG6], e_ident[EI_MAG7],
	       e_ident[EI_MAG8], e_ident[EI_MAG9], e_ident[EI_MAG10], e_ident[EI_MAG11],
	       e_ident[EI_MAG12], e_ident[EI_MAG13], e_ident[EI_MAG14], e_ident[EI_MAG15]);
}

/**
 * display_elf_header - Display information contained in the ELF header
 * @header: ELF header structure
 */
void display_elf_header(Elf64_Ehdr *header) {
	printf("ELF Header:\n");
	display_magic(header->e_ident);
	printf("  Class:                             %s\n",
	       header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
	       header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
	       header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI]) {
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
			break;
	}
	printf("  ABI Version:                       %d\n",
	       header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type) {
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_type);
			break;
	}
	printf("  Entry point address:               %p\n",
	       (void *) header->e_entry);
}

/**
 * print_error - Display error message and exit
 * @msg: Error message
 */
void print_error(char *msg) {
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[]) {
	if (argc != 2) {
		print_error("Usage: elf_header elf_filename");
	}

	int fd;
	Elf64_Ehdr elf_header;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		print_error("Error: Unable to open file");
	}

	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
		print_error("Error: Unable to read ELF header");
	}

	if (!(elf_header.e_ident[EI_MAG0] == ELFMAG0 &&
	      elf_header.e_ident[EI_MAG1] == ELFMAG1 &&
	      elf_header.e_ident[EI_MAG2] == ELFMAG2 &&
	      elf_header.e_ident[EI_MAG3] == ELFMAG3)) {
		print_error("Error: Not an ELF file");
	}

	display_elf_header(&elf_header);

	close(fd);
	return (0);
}
