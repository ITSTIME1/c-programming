#include <stdio.h>

int main() {
	int num = 0;
	printf("num을 입력 : ");
	scanf("%d", &num);

	// for (int i = 0; i < num; i ++) {

	// 	for (int j = num*2-1; j > num+i; j--) {
	// 		printf(" ");
	// 	}
	// 	for (int k = 0; k < 2*i+1; k ++) {
	// 		printf("*");
	// 	}
	// 	printf("\n");

	// }


	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i+1; j++){
			printf("*");
		}
		for (int k = num*2-1; k > (i+1)*2-1; k--) {
			printf(" ");
		}
		for (int j = 0; j < i+1; j++){
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < num-1; i++) {
		for (int j = 0; j < num-i-1; j++) {
			printf("*");
		}
		for (int k = 0; k < (2*i)+2; k++) {
			printf(" ");
		}
		for (int j = 0; j < num-i-1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
