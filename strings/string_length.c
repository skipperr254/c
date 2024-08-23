#include <stdio.h>

int main() {
	int length();

	char word[] = "Hello";

	printf("The length of %s is %d", word, length(word));
}

int length(word)
	char word[];
{
	int i;

	for (i = 0; word[i]; i++);
	return i;
}
