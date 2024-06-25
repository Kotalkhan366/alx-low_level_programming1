#include <stdio.h>

/**
 * A function that checks for lower case letter.
 *
 * Return: Always 0.
 */
int isLowercase(char ch)
{
if (ch >= 'a' && ch <= 'z')
{
return 1;
}
else
{
return 0;
}
}
