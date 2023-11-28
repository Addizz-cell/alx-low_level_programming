#include "main.h"

#define BUFF_SIZE 1024

/**
 * close_files - Closes file descriptors
 * @file1: File descriptor 1
 * @file2: File descriptor 2
 *
 * Description: Closes two file descriptors.
 */
void close_files(int file1, int file2);

/**
 * main - Entry point, copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, various error codes otherwise
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t read_bytes, write_bytes;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(file_from);
		return (99);
	}

	while ((read_bytes = read(file_from, buffer, BUFF_SIZE)) > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close_files(file_from, file_to);
			return (99);
		}
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_files(file_from, file_to);
		return (98);
	}

	close_files(file_from, file_to);
	return (0);
}

/**
 * close_files - Closes file descriptors
 * @file1: File descriptor 1
 * @file2: File descriptor 2
 *
 * Description: Closes two file descriptors.
 */
void close_files(int file1, int file2)
{
	if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}

	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
}
