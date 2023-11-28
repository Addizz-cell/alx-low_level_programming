#include "main.h"

/**
 * create_file - Creates a file and writes text to it
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t write_count, text_len = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[text_len])
			text_len++;

		write_count = write(file_descriptor, text_content, text_len);
		if (write_count == -1 || write_count != text_len)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
