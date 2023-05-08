#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: a pointer to the file.
 * @letters: the number of letters it should read and print.
 *
 * Return: the number of letters that could be read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, w, t;
	char *buffer;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	t = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);
	free(buffer);
	close(fp);
	return (w);
}
