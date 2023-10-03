#include "main.h"

char *create_temp(char *f);
void f_close(int fd);

/**
* create_temp - allocates 1024 bytes to temp storage
* @f: filename of the temp storage
* Return: ptr to allocated temp
*/

char *create_temp(char *f)
{
	char *temp;

	temp = malloc(sizeof(char) * 1024);

	if (temp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Cant write to %s\n", f);
		exit(99);
	}

	return (temp);
}

/**
* f_close - closes file descriptors
* @fd: file descriptors to lose
* Return: nil
*/

void f_close(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* main - copies the content of a file to another file
* @argc: argument count to the prg
* @argv: array of ptr to the arguments
* Return: zero
*/

int main(int argc, char *argv[])
{
	int s, d, r, w;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = create_temp(argv[2]);
	s = open(argv[1], O_RDONLY);
	r = read(s, b, 1024);
	d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (s == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		w = write(d, b, r);
		if (d == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		r = read(s, b, 1024);
		d = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(b);
	f_close(s);
	f_close(d);

	return (0);
}
