#include "holberton.h"
/**
* num_tokens - Calculates number of tokens.
* @tok: Tokens.
* Return: Returns double pointer to commands.
*/

unsigned int num_tokens(char *tok)
{
	unsigned int argv, i, count;

	count = 0;
	argv = 0;
	i = 0;
	while (tok[i] != '\0')
	{
		if (tok[i] != ' ')
			count = 1;

		if ((count && tok[i + 1] == ' ') || (count && tok[i + 1] == '\0'))
		{
			++argv;
			count = 0;
		}
		++i;
	}
	return (argv);
}

/**
* free_memory - frees memory allocated in double pointers.
* @mem: Double pointer to malloc.
* Return: Doesn't return.
*/
void free_memory(char **mem)
{
	int i = 0;

	if (mem == NULL)
	{
		return;
	}

	while (mem[i] != NULL)
	{
		free(mem[i]);
		++i;
	}

	if (mem[i] == NULL)
	{
		free(mem[i]);
	}

	free(mem);
}

/**
* tokenize - Tokenizes commands.
* @str: String that contains commands and will be tokenized.
* Return: Returns double pointer to allocated memory.
*/
char **tokenize(char *str)
{
	char **argv = NULL;
	char *token;
	unsigned int tokens;
	int i = 0;

	tokens = num_tokens(str);

	argv = malloc((sizeof(char *)) * (tokens + 1));
	if (argv == NULL)
		{
		return (NULL);
		}

		token = strtok(str, " \t\n\r");
		if (token == NULL)
		{
			free(str);
			return (NULL);
		}
		while (token != NULL)
		{
			argv[i] = malloc(_strlen(token) + 1);

				if (argv[i] == NULL)
				{
					free_memory(argv);
					return (NULL);

				}
				strncpy(argv[i], token, _strlen(token) + 1);
				token = strtok(NULL, " \t\n\r");
				i++;
			}
	argv[i] = NULL;
	return (argv);

}


