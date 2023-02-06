#include <stdio.h>

int main() {
	int num = 0;
	printf("input integer : ");
	scanf("%d", &num);


	// num 에 따라서 별을 출력해보는 걸연습해보자/
	// 거꾸로된 직각삼각형
	// for (int i = 0; i < num; i++) {
	// 	for (int j = 0; j < num-i; j++) {
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }

	// 정상적인 직각삼각형

	for(int i=0; i < num; i++) {
		for (int j=0; j < num-i-1; j++) {
			printf(" ");
		}
		for (int k=0; k < i+1; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < num; i++) {
		for(int j = 0; j < num-i-1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2*i+1; k++) {
			printf("*");
		}
		printf("\n");
	}


	for(int i = 0; i < num; i ++) {
		for (int j = 0; j < i; j++){
			printf(" ");
		}
		for (int k = 0; k < num; k++) {
			printf("*");	
		}
		printf("\n");
	}


	for (int i = 0; i < num; i++) {
		if (i == 0 || i == num-1) {
			for(int j = 0; j < num; j++) {
				printf("*");
			}
			printf("\n");
		} else {
			for(int k = 0; k < 1; k++) {
				printf("*");
			}
			for (int c = 0; c < num-2; c++) {
				printf(" ");
			}
			for(int k = 0; k < 1; k++) {
				printf("*");
			}
			printf("\n");

		}
	}

	for(int i=0; i < num; i++) {
		if (i == 0 || i == num-1) {
			for (int j = 0; j < num; j++) {
				printf("*");
			}
			printf("\n");
		} else if (i % num != 0) {
			printf("*");
			for(int k = 0; k < num - 2; k++) {
				printf(" ");
			}
			printf("*");
			printf("\n");
		} else {
			for(int k = 0; k < 1; k++) {
				printf("*");
			}
			for (int c = 0; c < num-2; c++) {
				printf(" ");
			}
			for(int k = 0; k < 1; k++) {
				printf("*");
			}
			printf("\n");
		}

	}
}