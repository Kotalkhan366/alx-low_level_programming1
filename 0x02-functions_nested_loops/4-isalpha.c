#include <stdio.h>
#include <ctype.h>
/**
 * A program that checks for alphabet character.
 *
 * Return: Always 0.
 */
int main()
{
char ch;
prinf("Enter any character: ");
scanf("%c" , &ch);
if (isalpha(ch))
{
printf("'%c' is a alphabet.\n", ch);
}
else
{
printf("'%c' is not an alphabet.\n", ch);
}
return 0;
}
