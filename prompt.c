#include "holberton.h"
/**
* main - prompts the user for commands.
*
* Return: Returns 1 on success and 0 if it fails.
*/
int main(void)
{
	char *buffer = NULL, **argv = NULL;
	size_t bufsize = 0;
	int characters = 0;
	int status;
	pid_t child;

if (isatty(STDIN_FILENO))
	write(STDIN_FILENO, "$ ", 2);

while ((characters = getline(&buffer, &bufsize, stdin)))
{
	if (characters == -1)
	{
		free(buffer);
		return (-1);
	}
	*(buffer + characters - 1) =  '\0';
	argv = tokenize(buffer);
	child = fork();
	if (child == -1)
		fork_fail(buffer, argv);
	if (child == 0)
		_forkexe(buffer, argv, environ);
	else
	{
		wait(&status);
		_forkwait(buffer, argv);
	}
	buffer = NULL;
	if (isatty(STDIN_FILENO))
		write(STDIN_FILENO, "$ ", 2);
}
if (characters == EOF)
{
	end_of_line(buffer, argv);
}
free(buffer);
free_memory(argv);
return (EXIT_SUCCESS);
}
