#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	ssize_t nread;
	char *buffer;
	FILE *fp;

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		free(buffer);
		return (0);
	}
	nread = fread(buffer, sizeof(char), letters, fp);
	if (nread == -1)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	fclose(fp);
	fwrite(buffer, sizeof(char), nread, stdout);
	free(buffer);
	return (nread);
}
