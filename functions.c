/**
 * _putchar - a putchar implementation function
 * Return: a single character
 * @c: character variable
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
