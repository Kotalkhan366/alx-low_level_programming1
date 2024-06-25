#include <stdio.h>

/**
 * A program that prints 10 times the alphabet.
 */
void printAlphabetTenTimes()
{
char letter;
int i;
for (i = 0; i < 10; i++) 
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
printf("\n");
}
int main()
{
printAlphabetTenTimes();
return 0;
}
