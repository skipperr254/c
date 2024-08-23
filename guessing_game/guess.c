#include <stdio.h>

int main() {
	int guess;

	int guesses = 1;

	printf("I am thinking of a number between 0 and 100. Try and guess it in the least amount of guesses\n");
	printf("Guess the number.\n");
	
	while (scanf("%d", &guess) == 1) {
		if (guess < 42) {
			printf("Too low, try again\n");
		}

		if (guess > 42) {
			printf("Too high, try again\n");
		}

		if (guess == 42) {
			printf("Good job, you guessed in %d guesses", guesses);
			break;
		}
		guesses += 1;
	}
}
