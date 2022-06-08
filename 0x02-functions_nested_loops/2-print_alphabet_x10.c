#include "main.h"
/**
* print_alphabet_x10.c - print alphabet 10 times
* Description: print alphabet 10 times
* Return: 0
*/

void print_alphabet_x10(void)
{
	char alph;

	int i = 1;

while (i <= 10)
{
	alph = 'a';
	while (alph <= 'z')
{
	_putchar(alph);
	alph++;
}
_putchar('\n');
i++;
	}
}

