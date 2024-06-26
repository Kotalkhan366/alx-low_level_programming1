#include <stdio.h>
/**
 * main - A program that prints every minute of the day of Jack Bauer.
 *
 * Return: Always 0
 * */
void printMinutesofDay()
{
for (int hour  0; hour < 24; ++hour)
{
for (int minute = 0; minute < 60; ++minute)
{
printf("%02d:%02d\n", hour, minute);
}
}
}
int main()
{
printMinutesOfDay();
return 0;
}
