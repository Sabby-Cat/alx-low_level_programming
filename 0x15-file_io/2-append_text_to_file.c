#include "main.h"
/**
 * append_text_to_file - add text to end of file
 * @filename: name of file
 * @text_content: content to add
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int of, wf, l = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
		l = strlen(text_content);

	of = open(filename, O_WRONLY | O_APPEND);
	wf = write(of, text_content, l);
	if (of == -1 || wf == -1)
		return (-1);

	close(of);
	return (1);
}
