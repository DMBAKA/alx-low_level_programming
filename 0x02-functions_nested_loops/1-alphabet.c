#include "main.h"
#include <unistd.h>
/**
* main - check the code
* Description: print lowercase
* Return: void
*/

void print_alphabet(void)
{
	char lcase;

	lcase = 'a';

	while (lcase <= 'z')

	{
	_putchar(lcase);
	lcase++;
}

_putchar('\n');
}
