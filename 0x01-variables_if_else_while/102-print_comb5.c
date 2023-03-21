#include <stdio.h>
/**
* main - Entry point
* Description: Write a program that prints all possible
* Different combinations of digits
* Return: 0
*/
int main(void)
{
int n = 0;
int m;
while (n <= 99)
{
m = n;
while (n <= 99)
{
if (m != n)
{
putchar((n / 10) + 48);
putchar((n % 10) + 48);
putchar(',');
putchar((m / 10) + 48);
putchar((m % 10) + 48);
if (n != 98 || m != 99)
{
putchar(',');
putchar(',');
}
}
m++;
}
n++;
}
putchar('\n');
return (0);
}
