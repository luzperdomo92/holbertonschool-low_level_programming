#include "holberton.h"
/**
 * read_textfile - eads a text file and prints
 * @filename: name of the file
 * @letters: length of buffer
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int file_desc;
	int read_file;
	int write_file;
	char *buffer;

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL || filename == NULL)
	{
		return (0);
	}

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		free(buffer);
		return (0);
	}

	read_file = read(file_desc, buffer, letters);
	if (read_file == -1)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}

	buffer[read_file] = '\0';

	write_file = write(STDOUT_FILENO, buffer, letters);
	if (write_file == -1)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}

	close(file_desc);
	free(buffer);
	return (read_file);
}
