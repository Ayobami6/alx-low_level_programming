#include "main.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	ssize_t rc, wc;
	char *buffer;

	if (filename == NULL)
		return (0);

	fo = open(filename, O_RDWR);
	if (fo == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rc = read(fo, buffer, letters);
	if (rc == -1)
		return (0);

	wc = write(STDOUT_FILENO, buffer, rc);
	if (wc == -1 || rc != wc)
		return (0);
	free(buffer);

	close(fo);
	return (wc);
}
