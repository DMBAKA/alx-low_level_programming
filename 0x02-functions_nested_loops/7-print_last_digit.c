#include "main.h"

/**
 * print_last_digit - prints last digit
 * @b: integer
 * Return: value of last digit
 */
int print_last_digit(int b)
{
if (b < 0)

b = -b % 10;
else if (b > 0)
b = b % 10;
else
b = 0;
_putchar('0' + b);
_putchar('\n');
return (b);
}
