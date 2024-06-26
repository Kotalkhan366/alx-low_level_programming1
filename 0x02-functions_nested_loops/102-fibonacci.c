#include <stdio.h>
/**
 * main - A program that prints the first 50 fibonacci numbers.
 *
 * Return: Always 0
 * */
void printFibonacci(int n)
{
long long int a = 1 , b, = 2, next;
printf("%lld\n%lld\n", a, b);
for (int i = 3; i <= n; ++i)
{
next = a + b;
printf("%lld\n", next);
a = b;
b = next
}
}
int main()
{
int count = 50;
printFibonacci(count);
return 0;
}
