#include "holberton.h"

/**
* _strlen - Calculates length of a string.
* @str: String that will be measured.
* Return: Returns length of string.
*/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
* _strcmp - Compares two strings.
* @str1: First string
* @str2: Second string.
* Return: Returns 0 if strings are different, returns 1 otherwise.
*/
int _strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i])
	{
		if (str1[i] != str2[i])
		{
			return (0);
		}
		i++;
	}
		return (1);
}

/**
*_strcat - Function that concatenates two strings.
*@dest: String to be added at the end of original.
*@src: Original string.
*Return: Returns pointer to dest.
*/

char *_strcat(char *dest, char *src)

{
int i, j;
i = 0;
while (dest[i] != '\0')
i++;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}

/**
* _strncmp - Compares two strings.
* @s1: First string
* @s2: Second string.
* @n: Number of characters to be compared.
* Return: Returns 0 if strings are different, returns 1 otherwise.
*/
int _strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}

char *_strdup(char *str1)
{
	int i, j;
	char *str2;

	if (str1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; str1[i] != '\0'; i++)
	{
		;
	}

	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		str2[j] = str1[j];
	}

	return (str2);
}
