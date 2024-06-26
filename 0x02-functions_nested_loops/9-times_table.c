#include <stdio.h>
/**
 * main - A program that prints the 9 times table starting from 0.
 *
 * Return: Always 0.
 * */
void printNineTimesTable()
{
for (int i =0; i <= 10; ++i)
{
printf("9 x %d = %d\n", i, 9 * i);
}
}
int main()
{
printNineTimesTable();
return 0;
}
