#include <stdio.h>


int main() {
	float num1;
	double num2;

	printf("Enter a number : ");
	scanf("%f", &num1);
	printf("Enter a dobule number : ");
	scanf("%lf", &num2);

	printf("%f %lf", num1, num2);

	char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);     

    // When %c is used, a character is displayed
    printf("You entered %c.\n",chr);  

    // When %d is used, ASCII value is displayed
    printf("ASCII value is %d.", chr);  

	return 0;
}