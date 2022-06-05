#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse
*
*Return: Always 0
*/
int main(void)
{
	char lowcase;

	for (lowcase = 'z'; lowcase >= 'a'; lowcase--)
	putchar(lowcase);
putchar('\n');
return (0);
}
