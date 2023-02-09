#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);
	

	for (int i = num; i > 0; i--){
		for (int j = num-1; j > num-i; j--) {
			printf(" ");
		}
		for (int k = 0; k < num-i+1; k++) {
			printf("*");
		}
		printf("\n");
	}
}