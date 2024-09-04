#include <stdio.h>
#include <math.h>

int main()
{
	int number;

	printf("Enter your number: ");
	scanf("%d", &number);

	int q = number;
	int digits = 0;

	while (q)
	{
		digits += 1;
		q /= 10;
	}

	int z = number;
	int remainder, sum = 0;
	while (z)
	{
		remainder = z % 10;
		sum += (int)pow(remainder, digits);
		z /= 10;
	}

	// // if you don't want to use the stdlib's pow function
	// int z = number;
	// int remainder, sum = 0, mul = 1;
	// int count = digits;
	// while (z)
	// {
	// 	remainder = z % 10;
	// 	while (count)
	// 	{
	// 		mul = mul * remainder;
	// 		count--;
	// 	}
	// 	count = digits;
	// 	sum += mul;
	// 	mul = 1;
	// 	z /= 10;
	// }

	if (sum == number)
		printf("%d is an Armstrong number", number);
	else
		printf("%d is not an Armstrong number", number);
}
