#include <stdio.h>
/**
 * main - A program that calculates the sum of all multiplees of 3 or 5 below 1024.
 *
 * Return: Always 0.
 * */
int main()
{
int limit = 1024;
int sum = 0;
for(int i =1; i < limit; ++i)
{
if (i % 3 ==0 || i % 5 ==)
{
sum += i;
}
}
printf("Sum of multiples of 3 or 5 below 1024: %d\n", sum);
return 0;
}
