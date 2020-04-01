#include "holberton.h"

/**
 * open_file_from - open the file_from
 * @filename: name of the file
 * Return: a file_desc
 */
int open_file_from(const char *filename)
{
	int file_desc;
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		dprintf(2, "Cant read from file %s\n", filename);
		exit (98);
	}

	return (file_desc);
}

/**
 * open_file_to - open the file_from
 * @filename: name of the file
 * @file_desc_from: file_desc of file_from
 * Return: a file_desc
 */
int open_file_to(const char *filename, int file_desc_from)
{
	int file_desc;

	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 664);
	if(file_desc == -1)
	{
		close(file_desc_from);
		dprintf(2, "Error: Cant write to %s\n", filename);
		exit (99);
	}
	return (file_desc);
}

/**
 * read_textfile - open the file_from
 * @filename: name of the file
 * @file_desc: file_desc of file_from
 * @buffer: buffer to read
 * @letters: size of buffer
 * Return: a file_desc
 */
ssize_t read_textfile(const char *filename, int file_desc,  char *buffer, size_t letters)
{
	int read_file;

	read_file = read(file_desc, buffer, letters);
	if (read_file == -1)
	{
		free(buffer);
		dprintf(2, "Cant read from file %s\n", filename);
		exit (98);
	}

	return (read_file);
}

/**
 * create_file - open the file_from
 * @filename: name of the file
 * @file_desc_to: file_desc of file_to
 * @file_desc_from: file_desc of file_from
 * @buffer: buffer to read
 * @letters: size of buffer
 * Return: write in file_desc_to
 */
int create_file(const char *filename, int file_desc_to, int file_desc_from, char *buffer, size_t letters)
{
	int write_file;

	write_file = write(file_desc_to, buffer, letters);
	if (write_file == -1)
	{
		free(buffer);
		close(file_desc_from);
		close(file_desc_to);
		dprintf(2, "Error: Cant write to %s\n", filename);
		exit (99);
	}
	return(1);
}


/**
 * main - check the code for Holberton School students.
 * @ac: size of params
 * @av: params array
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *file_from;
	char *file_to;
	int file_desc_from;
	int file_desc_to;
	size_t letters = 1024;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];

	buffer = malloc(letters);
	file_desc_from = open_file_from(file_from);
	file_desc_to = open_file_to(file_to, file_desc_from);

	if(buffer == NULL)
	{
		return (1);
	}

	while(read_textfile(file_from, file_desc_from, buffer, letters) > 0)
	{
		create_file(file_to, file_desc_from, file_desc_to, buffer, letters);
	}

	if (close(file_desc_to) == -1)
	{
		free(buffer);
		dprintf(2, "Error: Cant close fd %d\n", file_desc_to);
		exit (100);
	}
	if (close(file_desc_from) == -1)
	{
		free(buffer);
		dprintf(2, "Error: Cant close fd %d\n", file_desc_to);
		exit (100);
	}
	return (0);
}

