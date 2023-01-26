#include <stdio.h>

int main() {
	int number;

	printf("Enter a number : ");
	scanf("%d", &number);


	if (number < 5) {
		printf("True\n");
	} else {
		printf("False\n");
	}
	return 0;
}

