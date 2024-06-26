#include <stdio.h>
/**
 * main - A program that calculates and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 * */
void printFibonacci(int n)
{
long long int a = 1, b = 2, next;
printf("%lld\n%lld\n", a, b);
for (int = 3; i <= n; ++i)
{
next = a + b;
printf("%lld\n", next);
a = b;
b = next;
}
}
int main()
{
int count = 98;
printFibonacci(count);
return 0;
}
