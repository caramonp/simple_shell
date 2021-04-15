#include "holberton.h"
/**
* tokenize_env - function that tokenizes enviroment.
* @comando: Command passed to the terminal.
* @environ: Global variable that contains enviroment.
* Return: Returns a pointer to commands.
*/

char *tokenize_env(char *comando, char **environ)
{
int i = 0, str = 1;
char *tmp = NULL, *token = NULL;
struct stat stapath;
static char *box;

	for (i = 0; environ[i] != NULL; i++)
		if (_strncmp(environ[i], "PATH=", 5) == 0)
			{
			break;
			}
	tmp = _strdup(environ[i]);
	token = strtok(tmp, ":");
	for (i = 0; token != NULL; i++)
	{
		box = malloc((_strlen(token) + _strlen(comando) + 2) * sizeof(char));
		if (box == NULL)
		{
			free(box);
			free(tmp);
			return (NULL);
		}
		_strcat(box, token);
		if (box[i - 1] != '/')
		{
			_strcat(box, "/");
		_strcat(box, comando);
		str = stat(box, &stapath);
		}
		if (str == 0)
		{
			free(tmp);
			return (box);
		}
		token = strtok(NULL, ":");
	}
free(box);
free(tmp);
return (comando);
}

/**
* exe_path - this function executes the commands passed to it.
* @argv: Commands passed to our prompt.
* @environ: Global variable that contains enviroment.
* Return: Doesn't return.
*/

void exe_path(char **argv, char **environ, int count)
{
	int i = 0;
	char *directories = NULL;

	directories = tokenize_env(argv[0], environ);
	argv[0] = directories;

	i = execve(argv[0], argv, NULL);
	if (i == -1)
	{
	print_error(argv, argv[0], count);
	free_memory(argv);
	exit(EXIT_SUCCESS);
	}
	free_memory(argv);
	exit(EXIT_SUCCESS);
}
/**
* print_env - Prints enviroment.
* @enviroment: Global variable that holds enviroment.
* Return: Doesn't return.
*/
void print_env(char **enviroment)
{
	unsigned int i = 0, j = 0;

	while (enviroment[i])
	{
	j = _strlen(enviroment[i]); /** Tamaño**/
	write(STDIN_FILENO, enviroment[i], j);
	write(STDIN_FILENO, "\n", 1);
	i++;
	}
}

/**
* env_command - frees memory and prints enviroment.
* @buffer: Buffer containing allocated space.
* @argv: Commands passed to our prompt.
* @environ: Global variable containing enviroment.
*/
void env_command(char *buffer, char **argv, char **environ)
{
	free(buffer);
	free_memory(argv);
	print_env(environ);
	exit(EXIT_SUCCESS);
}
