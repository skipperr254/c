#include <stdio.h>

int main() {
	int multiply();
	int value = multiply(6, 7);

	printf("6 * 7 = %d", value);
}

int multiply(a, b) 
	int a, b;
{
	return a * b;
}
