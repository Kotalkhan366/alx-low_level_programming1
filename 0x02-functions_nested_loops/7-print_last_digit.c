#include <stdio.h>
/**
 * main - A program that prints the last digit of an interger.
 *
 * Return: Always 0.
 * */
int getLastDigit(int num)
{
return num % 10;
}
int main()
{
int number = 12345;
intlastDigit = get LastDigit(number);
printf("The Last digit of %d is %d\n", number, lastDigit);
return 0;
}
