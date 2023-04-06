#include "main.h"
/**
 * _strlen_recursion - prints length of string
 * @s: string to calculate its length
 *
 * Return: 0 if end of string 1 + smaller
 * problem other wise
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
