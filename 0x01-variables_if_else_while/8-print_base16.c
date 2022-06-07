#include <stdio.h>

/*
* main - print base 16 in lowercase
*
* Return: Always 0
*/
int main(void)
{
	int n;
	char lowcase;
       for ( n = 0; n <= 10; n++);
       putchar((n % 10) + '0');
       for (lowcase = 'a'; lowcase <= 'f'; lowcase++)
	       putchar(lowcase);
       putchar('\n');
       return (0);
}
