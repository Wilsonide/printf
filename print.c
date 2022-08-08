#include <stdio.h>
/**
 * _printf: a function that displays to the outputstream
 * Return: returns the number of characters
 * @format: character string
 */

int _printf(const char *format, ...)
{
int count = 0;
for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			{
			count = count + _putchar(format[i]);
			}
	        else if (format[i] == '%' && format[i+1] != ' ')
		switch (

return count;
}
