#include <stdio.h>
/**
 * main - A program that prints the multiplication table for a given positive interger starting from 0.
 *
 * Return: Always 0.
 * */
void printTimesTable(int n)
{
for (int i = 0; i <= 10; ++i)
{
printf("%d x %d = %d\n", n, i, n*i);
}
}
intmain(){
int number = 7;
printTIesTable(number);
return 0;
}
