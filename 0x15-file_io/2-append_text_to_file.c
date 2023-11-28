#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_count, text_len = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
