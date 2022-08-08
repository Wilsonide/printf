#include "main.h"
/**
 * _putchar - a putchar implementation function
 * Return: a single character
 * @c: character variable
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}



/**
 * print_string- function that prints a string
 * @s:string variable
 * Return: number of string characters
 */
int print_string(char *s)
{
count = 0;
for (i = 0; s[i] != '\0'; i++)
	count += _putchar(s[i]);
return (count);
}
