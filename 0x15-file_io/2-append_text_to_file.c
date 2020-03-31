#include "holberton.h"
/**
 * append_text_to_file -appends text at the end of a file.
 * @filename: name of the file
 * @text_content: length of buffer
 * Return: actual number of letters it could read and print.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int write_file;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}
	while (text_content[length])
		length++;

	write_file = write(file_desc, text_content, length);
	if (write_file == -1)
	{
		return (-1);
	}
	close(file_desc);
	return (1);
}
