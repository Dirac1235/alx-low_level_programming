#include <stdio.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

void check_file(unsigned char *file);
void show_magic(unsigned char *file);
void show_class(unsigned char *file);
void show_data(unsigned char *file);
void show_version(unsigned char *file);
void show_abi(unsigned char *file);
void show_os_abi(unsigned char *file);
void show_type(unsigned char *file);
void show_entry_point_address(unsigned char *file, unsigned int bits64);
void close_file(int elf);

/**
 * main - entry point
 * @argc: number of argv
 * @argv: argv
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd_elf, r_elf, close_elf, bits64 = 0;
	unsigned char h[32];

	/*restrictions with exit 98*/
	if (argc != 2)
		dprintf(STDERR_FILENO, "wrong number of arguments\n"), exit(98);
	if (argv[1] == 0)
		dprintf(STDERR_FILENO, "Please enter a name, Null error\n"), exit(98);
	/*create the fd of file*/
	fd_elf = open(argv[1], O_RDONLY);
	if (fd_elf == -1)
		dprintf(STDERR_FILENO, "Can't open file\n"), exit(98);
	/* reading the first 32 chars of header elf*/
	r_elf = read(fd_elf, h, 32);
	if (r_elf == -1)
		dprintf(STDERR_FILENO, "Error Reading File\n"), exit(98);
	/* check if is a elf: magic number, ELF */
	check_file(h);
	/* check if is for 64 bits = 1; else 32 = 0 */
	if (h[4] == 2)
		bits64 = 1;

	show_magic(h);
	show_class(h);
	show_data(h);
	show_version(h);
	show_os_abi(h);
	show_abi(h);
	show_type(h);
	show_entry_point_address(h, bits64);

	/*close fd of elf*/
	close_elf = close(fd_elf);
	if (close_elf == -1)
		dprintf(STDERR_FILENO, "Error closing FD Elf\n"), exit(98);
	return (0);
}

/**
 * check_file - checks whether a file is elf file
 * @file: Is a pointer to a file containing the ELF magic number
 *
 * Description: If the file is not ELF file it exits with code 98
 */
void check_file(unsigned char *file)
{
	if (file[0] != 0x7f || file[1] != 'E' || file[2] != 'L' || file[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: file is not ELF type");
		exit(98);
	}
}

/**
 * show_magic - print ELF magic number
 * @file: File containing the ELF magic number
 */
void show_magic(unsigned char *file)
{
	int index;

	printf("ELF Header:\n  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", file[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * show_class - shows the class of the ELF header.
 * @file: File containing the class of the elf header.
 */
void show_class(unsigned char *file)
{
	printf("  Class:                             ");

	switch (file[EI_CLASS])
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
		printf("<unknown: %x>\n", file[EI_CLASS]);
	}
}

/**
 * show_data - Prints the data of an ELF header.
 * @file: File  containing the ELF class.
 */
void show_data(unsigned char *file)
{
	printf("  Data:                              ");

	switch (file[EI_DATA])
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
		printf("<unknown: %x>\n", file[EI_CLASS]);
	}
}

/**
 * show_version - Prints the version of an ELF header.
 * @file: A file  containing the ELF version.
 */

void show_version(unsigned char *file)
{
	printf("  Version:                           %d",
		   file[EI_VERSION]);

	switch (file[EI_VERSION])
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
 * show_os_abi - Prints the OS/ABI of an ELF header.
 * @file: A file containing the ELF version.
 */

void show_os_abi(unsigned char *file)
{
	unsigned char osabi;

	printf("  OS/ABI:                            ");

	osabi = file[EI_OSABI];

	if (osabi == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (osabi == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (osabi == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (osabi == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (osabi == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (osabi == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (osabi == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (osabi == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (osabi == ELFOSABI_ARM)
		printf("ARM\n");
	else if (osabi == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", osabi);
}
/**
 * show_abi - Prints the ABI version of an ELF header.
 * @file: A pointer to an array containing the ELF ABI version.
 */
void show_abi(unsigned char *file)
{
	printf("  ABI Version:                       %d\n",
		   file[EI_ABIVERSION]);
}
/**
 * show_type - print elf data
 * @file: header
 */
void show_type(unsigned char *file)
{
	int xtype = 17;

	if (file[5] == 1)
		xtype = 16;

	printf("  %-35s", "Type:");

	switch (file[xtype])
	{
	case 0:
		printf("NONE\n");
		break;
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	case 4:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown>: %02x\n", file[xtype]);
	}
}
/**
 * show_entry_point_address - print antre point
 * @file: var of arrays
 * @bits64: you can declare fx for 64 bit
 * Return: void
 */
void show_entry_point_address(unsigned char *file, unsigned int bits64)
{
	int count = 27, i;

	printf("  %-35s0x", "Entry point address:");

	if (bits64 == 1)
		count = 31;

	if (file[5] == 1)
	{
		i = count;
		while (file[i] == 0 && i > 24)
			i--;
		printf("%x", file[i]);
		i--;

		while (i >= 24)
		{
			printf("%02x", (unsigned char) file[i]);
			i--;
		}
	}
	else
	{

		i = 24;
		while (file[i] == 0)
			i++;
		printf("%x", file[i]);
		i++;

		while (i <= count)
		{
			printf("%02x", (unsigned char) file[i]);
			i++;
		}
	}
	printf("\n");
}
