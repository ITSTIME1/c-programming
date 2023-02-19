#include <stdio.h>

int main() {

	// 우선 c를 출력하는 프로그램인데
	int n = 8;
	// 일단 8번째 줄 까지 출력을하네
	// 0, 7 이면 
	// 17 개중에서 4개 는 공백
	// c 는 8개
	int total = 17;
	for (int i = 0; i < n; i ++) {
		if(i == 0 || i == n-1) {
			for (int j = 0; j < 4; j++) {
				printf(" ");
			}
			for (int j = 0; j < 8; j ++) {
				printf("c");
			}
			printf("\n");
		} else if (i == 1 || i == n-2) {

			for(int j = 0; j < 2; j ++) {
				printf(" ");
			}
			for (int j = 0; j < 2; j ++) {
				printf("c");
			}
			for(int j = 0; j < total-7; j ++) {
				printf(" ");
			}
			for(int j = 0; j < 2; j ++) {
				printf("c");
			}
			printf("\n");
		} else if (i == 2 || i == n-3) {
			for (int j = 0; j < 2; j++) {
				printf("c");
			}
			for (int j =0; j < total-4; j++) {
				printf(" ");
			}
			for (int j = 0; j < 2; j++) {
				printf("c");
			}
			printf("\n");
		} else {
			for (int j = 0; j < 2; j++) {
				printf("c");
			}
			printf("\n");
		}
	}
	return 0;	
}
