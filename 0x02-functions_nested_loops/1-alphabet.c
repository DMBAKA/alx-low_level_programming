#include "main.h"
#include <unistd.h>
/**
*
* main - check the code
*
* Return: Always 0
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
