#include <stdio.h>
/**
 * main - A progam that calcules the sum of even-valued terms in the Fibonacci sequence.
 *
 * Return: Always 0.
 * */
void printEvenFibonacciSum(int n)
{
long long int a = 1, b = 2, next, sum = 0;
while (b <= n)
{
if (b % 2== 0)
{
next = a=b;
a =b;
b =next;
}
printf("Sum of even Fibonacci terms: %lld\n", sum);
}
int main()
{
int limit = 4000000;
printEvenFibonacciSum(limit);
retrn 0;
}
