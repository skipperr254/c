#include <stdio.h>

/*
 * 1 row --> 1 star
 * 2 rows --> 1 start then 3 starts
 * 3 rows --> 2 star then 3 stars then 5 stars
 */

int main() {
	int rows;	
	printf("How many rows of stars do you want? \n");
	scanf("%d", &rows);

	for (int i = 1; i <= rows; i++) {
		int spaces = rows - i;
		int chars = i * 2 - 1;
		for (int s = 0; s < spaces; s++) printf(" ");
		for (int c = 0; c < chars; c++) printf("*");
		for (int s = 0; s < spaces; s++) printf(" ");
		printf("\n");
	}
}

