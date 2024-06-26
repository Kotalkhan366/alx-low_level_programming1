#include <stdio.h>
/**
 * main - A program that prints all natural numbers from a given value.
 *
 * Return: Always 0.
 * */
void printNaturalNumbers(int n)
{
for (int i = n; i <= 98; ++i)
{
printf("%d\n", i);
}
}
int main()
{
int startValue = 50;
printNaturalNumbers(startValue);
return 0;
}
