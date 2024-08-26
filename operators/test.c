#include <stdio.h>

int main() {
	char string[10];
	int length();
	
	scanf("%s", string);	

	int len = length(string);
	printf("%d", len);
	
	for (len; len >= 0; len--) {
		printf("%c\n", *(string + len));
	}
}

int length(str) 
	char str[];
{
	int i;

	for (i = 0; str[i]; i++);
	return i;
}
