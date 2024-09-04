#include <stdio.h>

int main() {
	int number, remainder, newNum = 0;

	printf("Enter your number: ");
	scanf("%d", &number);

	int oldNum = number;

	while (number) {
		remainder = number % 10;
		number /= 10;
		newNum = newNum * 10 + remainder;
	}
	
	if (newNum == oldNum)
		printf("Palindrome");
	else
		printf("Not a palindrome");
}
