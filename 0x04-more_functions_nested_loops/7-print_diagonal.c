#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: the diagonal line
 */

void print_diagonal(int n)
{
	int x;
	int y;

if (n > 0)
_putchar('\\');

for (y = 0; y > n; y--)
{
for (x = y; x > 0; x++)
_putchar('_');
_putchar('\n');
}
}
