#include "main.h"

void check_elf(unsigned char *id);
void print_magic(unsigned char *id);
void print_class(unsigned char *id);
void print_data(unsigned char *id);
void print_version(unsigned char *id);
void print_abi(unsigned char *id);
void print_osabi(unsigned char *id);
void print_type(unsigned int tp, unsigned char *id);
void print_entry(unsigned long int ent, unsigned char *id);
void close_elf(int f);
/**
 * check_elf - Checks if ELF file exists
 * @id: ELF array
 */
void check_elf(unsigned char *id)
{
	int indx;

	for (indx = 0; indx < 4; indx++)
	{
		if (id[indx] != 127 &&
		    id[indx] != 'E' &&
		    id[indx] != 'L' &&
		    id[indx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints ELF magic nrs
 * @id: magic nrs array
 */
void print_magic(unsigned char *id)
{
	int indx;

	printf("  Magic:   ");

	for (indx = 0; indx < EI_NIDENT; indx++)
	{
		printf("%02x", id[indx]);

		if (indx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints ELF header class
 * @id: ELF class array
 */
void print_class(unsigned char *id)
{
	printf("  Class:                             ");

	switch (id[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", id[EI_CLASS]);
	}
}

/**
 * print_data - Prints data
 * @id: ELF class array
 */
void print_data(unsigned char *id)
{
	printf("  Data:                              ");

	switch (id[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", id[EI_CLASS]);
	}
}

/**
 * print_version - Prints version
 * @id: ELF version array
 */
void print_version(unsigned char *id)
{
	printf("  Version:                           %d",
	       id[EI_VERSION]);

	switch (id[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Prints OS/ABI
 * @id: ELF version array
 */
void print_osabi(unsigned char *id)
{
	printf("  OS/ABI:                            ");

	switch (id[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
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
		printf("<unknown: %x>\n", id[EI_OSABI]);
	}
}

/**
 * print_abi - Prints ABI version
 * @id: ELF ABI version array
 */
void print_abi(unsigned char *id)
{
	printf("  ABI Version:                       %d\n",
	       id[EI_ABIVERSION]);
}

/**
 * print_type - Prints ELF header type
 * @tp: ELF type
 * @id: ELF class array
 */
void print_type(unsigned int tp, unsigned char *id)
{
	if (id[EI_DATA] == ELFDATA2MSB)
		tp >>= 8;

	printf("  Type:                              ");

	switch (tp)
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
		printf("<unknown: %x>\n", tp);
	}
}

/**
 * print_entry - prints ELF header entry point
 * @ent: entry point address
 * @id: ELF class array
 */
void print_entry(unsigned long int ent, unsigned char *id)
{
	printf("  Entry point address:               ");

	if (id[EI_DATA] == ELFDATA2MSB)
	{
		ent = ((ent << 8) & 0xFF00FF00) |
			  ((ent >> 8) & 0xFF00FF);
		ent = (ent << 16) | (ent >> 16);
	}

	if (id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)ent);

	else
		printf("%#lx\n", ent);
}

/**
 * close_elf - Closes ELF file
 * @f: open file
 */
void close_elf(int f)
{
	if (close(f) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", f);
		exit(98);
	}
}

/**
 * main - prints info of elf file
 * @argc: count
 * @argv: vector
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int of, rf;

	of = open(argv[1], O_RDONLY);
	if (of == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(of);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rf = read(of, head, sizeof(Elf64_Ehdr));
	if (rf == -1)
	{
		free(head);
		close_elf(of);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(head->e_ident);
	printf("ELF Header:\n");
	print_magic(head->e_ident);
	print_class(head->e_ident);
	print_data(head->e_ident);
	print_version(head->e_ident);
	print_osabi(head->e_ident);
	print_abi(head->e_ident);
	print_type(head->e_type, head->e_ident);
	print_entry(head->e_entry, head->e_ident);

	free(head);
	close_elf(of);
	return (0);
}
