#include "holberton.h"
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_contentet: length of buffer
 * Return: actual number of letters it could read and print.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int write_file;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if(file_desc == -1)
	{
		return (-1);
	}

	if(text_content != NULL)
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
	return(1);
}
