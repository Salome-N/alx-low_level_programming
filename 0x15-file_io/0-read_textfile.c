#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: ptr to the filename
* @letters: number of letters it should read and print
* Return: actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *f;

	if (filename == NULL)
		return (0);

	f = malloc(sizeof(char) * letters);
	if (f == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, f, letters);
	w = write(STDOUT_FILENO, f, r);

	if (r == -1 || w == -1 || o == -1)
	{
		free(f);
		return (0);
	}

	free(f);
	close(o);

	return (w);
}
