#include "main.h"
#include <stdarg.h>
/**
 * _printf - a function that displays to the outputstream
 * Description: c printf function
 * @format:character variable
 * Return: returns the number of characters
 */

int _printf(const char *format, ...)
{
va_list list;
va_start(list, format);
int count = 0;
for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] != '%')
		{
		count = count + _putchar(format[i]);
		}
	else if (format[i] == '%' && format[i + 1] != ' ')
		{
		switch (format[i + 1])
			{
			case 'c':
				count += _putchar(va_arg(list, int));
				break;
			case 's':
				count += print_string(var_arg(list, char *);
				break;
			case '%':
				count += _putchar('%');
				break;
			default:
				break;
			}
		}
	}

return (count);
}
