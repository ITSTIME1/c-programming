#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);
	

	// for (int i = 0; i < num; i++) {
	// 	for (int j = 0; j < num-i; j++) {
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }	


	// for(int i = 0; i < num; i++) {
	// 	for (int j = 0; j < i; j++) {
	// 		printf(" ");
	// 	}
	// 	for (int k = 0; k < num-i; k++) {
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }

	// for (int i = 0; i < num; i++) {
	// 	for (int j = 0; j < num-i-1; j++) {
	// 		printf(" ");
	// 	}
	// 	for (int c = 0; c < i*2+1; c++) {
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }

	for (int i = 0; i < num; i++) {
		for (int j = num*2; j > num*2-i; j--) {
			printf(" ");
		}
		for (int k = 0; k < (num*2)-(i*2)-1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}