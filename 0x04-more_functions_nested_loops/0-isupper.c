#include "main.h"

/*
 * _isupper - writes the character c to stdout
 * @c: the character in ASCII
 * Return: 1 if upper 0 if lower
 */

int _isupper(int c)
{
if (c < 65 || c > 90)

{
return (0);
}
else
{
return (1);
}
}
