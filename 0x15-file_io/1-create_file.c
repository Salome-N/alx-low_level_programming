#include "main.h"

/**
* create_file - creates a file
* @filename: ptr to the filename to create
* @text_content: ptr to string to write on the file
* Return: one
*/

int create_file(const char *filename, char *text_content)
{
	int o, w, l;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}