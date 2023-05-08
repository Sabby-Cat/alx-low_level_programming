#include "main.h"
/**
 * read_textfile - reads and prints a file to std input
 * @filename: name of file
 * @letters: nr of letters to read and print
 * Return: nr of letters it could read/write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t of, rf, wf;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	of = open(filename, O_RDONLY);
	rf = read(of, buff, letters);
	wf = write(STDOUT_FILENO, buff, rf);
	if (of == -1 || rf == -1 || wf == -1 || wf != rf)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(of);
	return (wf);
}
