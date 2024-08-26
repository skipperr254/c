#include <stdio.h>

int main() {
	int a = 4, b = 3;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	
	int c = a ^ b;

	printf("%d swapping\n", a);
	printf("%d c", c);
}
