#include <stdio.h>

int main() {
	char line[1000];
	printf("Enter an entire line on the next line. \n > ");

	scanf("%[^\n]1000s", line);

	printf("This is the line you entered: %s", line);
}
