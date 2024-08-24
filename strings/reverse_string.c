// Reversin a string in C
/*
 * This is the algorithm "I came up with"
 * Loop over the string from behind and create a new one adding the chars
 */

#include <stdio.h>

int main() {
	while (1) {
		int length();
		char str[100];

		if (scanf("%[^\n]s", str) != 1) break;
		
		char newString[length(str)];
	
		int i = length(str) - 1;
		int j = 0;

		for (i; i >= 0; i--) {
			newString[j] = str[i];
			j++;
		}
		newString[length(str)] = '\0';
		printf("%s in reverse is %s", str, newString);

	}
}

int length(str)
	char str[];
{
	int i;
	for (i = 0; str[i]; i++);
	return i;
}
