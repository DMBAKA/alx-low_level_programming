#include "main.h"
#include <stdio.h>

/**
 * Fizz - prints multiples of three
 * Buzz - prints multiples of five
 * FizzBuzz - prints multiples of both three and five
 * @x: prints 1 to 100
 * Return: Always 0
 */

int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 == 0)
printf("FizzBuzz");
else if (x % 3 == 0)
printf("Fizz");
else if (x % 5 == 0)
printf("Buzz");
else
printf("%d", x);
if (x < 100)
printf(" ");
}
_putchar('\n');
return (0);
}
