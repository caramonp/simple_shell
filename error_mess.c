#include "holberton.h"

void print_error(char **argv, char *comando, int count)
{
  int copy = count, length = 1, num_aux = 1;

  write(1, argv[0], _strlen(*argv));
  write(1, ": ", 2);

  while (copy >= 10)
  {
    copy /= 10;
    num_aux *= 10;
    length++;
  }
  
  while (length > 1)
  {
    if ((count / num_aux) < 10)
			_putchar((count / num_aux + '0'));
		else
			_putchar((count / num_aux) % 10 + '0');
		length--;
	  num_aux /= 10;
  }
  _putchar(count % 10 + '0');
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, comando, _strlen(comando));
	write(STDERR_FILENO, ": not found\n", 12);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
