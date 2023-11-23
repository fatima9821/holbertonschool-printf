#include "main.h"
/**
 * print_string - this function is for printing a given string str
 * @str: the string to be printed
 * it takes a pointer to character array (char*)
 * Return: string
 */
int print_string(const char *str)
{
	int i = 0;
	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		i += _putchar(*str);
		str++;
	}
	return (i);
}
