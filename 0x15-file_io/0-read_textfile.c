#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fl, fread, fwrite;
	char *ttlSize;
	ttlSize = malloc(sizeof(char) * letters);
	if (ttlSize == NULL)
	return (0);
	if (filename == NULL)
	return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
	return (0);
	fread = read(file, ttlSize, letters);
	if (fread == -1)
	return (0);
	fwrite = write(STDOUT_FILENO, ttlSize, fread);
	if (fwrite == -1)
	return (0);
	close(fl);
	free(ttlSize);
	return (fwrite);
}
