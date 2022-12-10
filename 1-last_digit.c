#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int n;
int ld_n;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld_n = n % 10;
if (ld_n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, ld_n);
if (ld_n == 0)
printf("Last digit of %d is %d and is 0\n", n, ld_n);
if ((ld_n < 6) && (ld_n != 0))
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld_n);
return (0);
}

