#include "holberton.h"
/**
* fork_fail - if fork fails, shows error.
* Return: Returns 1.
*/
int fork_fail(void)
{
	perror("Error:");
	return (1);
}
/**
* end_of_line - Executes if the end of line is reached.
* @buffer: Buffer.
* @argv: Commands.
*
*/
void end_of_line(char *buffer, char **argv)
{
	free(buffer);
	free_memory(argv);
	exit(0);
}

/**
* _forkexe - Function that executes processes.
* @buffer: Buffer.
* @argv: Commands.
* @environ: Global variable containing.
* Return: Returns 1 on success or 0 if it fails to execute.
*/
void _forkexe(char *buffer, char **argv, char **environ)
{
	char *_salida = "exit";
	char *environment_command = "env";
	struct stat statbuf;

	if (argv == NULL)
	{
		free(buffer); /*Comando es nulo*/
		exit(0);
	}
		else if (_strcmp(_salida, argv[0]))
		{
			free(buffer);
			free_memory(argv);
			exit(0);
		}
		else if (_strcmp(argv[0], environment_command))
			env_command(buffer, argv, environ);
		else if (stat(argv[0], &statbuf) == 0)
			execve(argv[0], argv, environ);
		else
			exe_path(argv, environ);
}

/**
* _forkwait - Function that waits for processes to be finished.
* @buffer: Buffer.
* @argv: Commands.
* Return: Returns 1 on success or 0 if it fails to execute.
*/
void _forkwait(char *buffer, char **argv)
{
	char *_salida = "exit";

	if (_strcmp(_salida, argv[0]))
	{
		free(buffer); /*Comando es exit*/
		free_memory(argv);
		exit(0);
	}
	else if (argv == NULL)
	{
		free(buffer); /*Comando es nulo.*/
		exit(0);
	}
		else
		free_memory(argv);
}
