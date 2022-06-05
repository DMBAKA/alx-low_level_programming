#include <stdio.h>

/**
*main- print lowercase except e and q
*
* Return: Always 0
*/
int main(void)
{char lowcase;
	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
if (lowcase != 'e' && lowcase != 'q')
putchar (lowcase);
putchar ('\n');
return (0);
}

