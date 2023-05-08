#include "main.h"
/**
 * main - copies info from 1 file to another
 * @argc: count
 * @argv: vector
 * Return: 0 or error
 */
int main(int argc, char *argv[])
{
	int ofr, ofw, rf, cr, cw;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ofr = open(argv[1], O_RDONLY);
	if (ofr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ofw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rf = read(ofr, buff, BUFSIZ)) > 0)
	{
		if (ofw < 0 || write(ofw, buff, rf) != rf)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(ofr);
			exit(99);
		}
	}
	if (rf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cr = close(ofr);
	cw = close(ofw);
	if (cr < 0 || cw < 0)
	{
		if (cr < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofr);
		if (cw < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofw);
		exit(100);
	}
	return (0);
}
