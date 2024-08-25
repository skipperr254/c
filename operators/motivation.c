#include <stdio.h>

int main() {
	void area();
	area();

	printf("==========================================================\n");

	void compare();
	compare();
}

void area() {
	/*
	 * A program to find the area of a rectangle garden given length and width
	 */
	printf("-------Arithmetic Operators (Finding the area of a rectangle)--------\n");

	int length, width;

	printf("Enter the length and the width: ");

	scanf("%d %d", &length, &width);

	printf("Area of rectangle with length %d and width %d is %d \n", length, width, length * width);	
}
	

void compare() {
	/*
	 * A program to check if your annual turnover is greater than that of your competitor
	 */
	printf("------Comparison Operators (Comparing company's turnover)-------\n");

	int company, competitor;

	printf("Enter your company's and your competitor's turnovers: ");

	scanf("%d %d", &company, &competitor);

	if (company < competitor) {
		printf("Your competitor beat you this time. Try harder next time! \n");
	} else if (company > competitor) {
		printf("You beat your competitors. Congratulations \n");
	} else {
		printf("You are on the same page as you competitor\n");
	}
}	
		
