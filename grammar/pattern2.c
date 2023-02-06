#include <stdio.h>

int main() {
		
	int num = 0;
	printf("input integer : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j<i+1; j++) {
			printf("*");
		}

		for (int k = 0; k < num - i - 1;  k++) {
			printf(" ");
		}

		for (int c = 0; c < num - i - 1; c++) {
			printf(" ");
		}

		for (int z = 0; z < i+1; z ++ ){
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < num - 1; i ++ ) {
		for (int j = 0; j < num-i-1; j ++) {
			printf("*");
		}
		for (int k = 0; k < i+1; k++) {
			printf(" ");
		}
		for (int z = 0; z < i+1; z++) {
			printf(" ");
		}
		for (int c = 0; c < num-i-1; c ++) {
			printf("*");
		}
		printf("\n");
	}
}
