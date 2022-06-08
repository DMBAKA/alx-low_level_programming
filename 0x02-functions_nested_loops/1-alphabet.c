#include "main.h"
#include <unistd.h>
/**
* print_alphabet - print alphabet
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
