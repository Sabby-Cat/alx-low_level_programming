#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: info to be in file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int of, wf, l = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
		l = strlen(text_content);

	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wf = write(of, text_content, l);
	if (of == -1 || wf == -1)
		return (-1);

	close(of);
	return (1);
}
