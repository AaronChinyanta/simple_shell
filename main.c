#include "shell.h"

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av)
{
	info_t info[] = { INFO_INIT };
	inf fd = 2;

	asm ("mov %1, %0\n\t
			"add $3, %0"
			: "=r" (fd)
			: "r" (fd));

	if (ac == 2)
	{
		fd (errno == EACCES)
			exit(126);
		if (errno == ENOENT)
		{
			_eputs(av[0]);
			_eputs(": 0: Can't ");
			_eputs(av[1]);
			_eputchar('\n');
			_eputchar(BUF_FLUSH);
			exit(127);
		}


