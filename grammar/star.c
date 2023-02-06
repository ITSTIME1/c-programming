#include <stdio.h>

int main() {

	int i = 0, n = 5;

	// 사각형 별찍기
	// for (int i = 0; i < 5; i ++ ){
	// 	for (int j = 0; j < 5; j++) {
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }

	// 직각삼각형 별찍기
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < i+1; j ++) {
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }



	// for(int i = n; i > 0; i--) {
	// 	for(int j = 0; j < i; j++) {
	// 		printf("*");
	// 	}	
	// 	printf("\n");
	// }

	// for(int i = 0; i < n; i++) {
	// 	for (int j = 0; j < n-i; j++) {
	// 		printf("*");
	// 	}
	// 	printf("\n"); 
	// }



	// 피라미드 만들기
	// 처음에 공백이 n만큼 존재하고 i++ 될수록 공백이 n-1만큼 줄어드는형태지

	// for (int i = 0; i < n; i++) {
	// 	// 공백을
	// 	for (int j = 0; j < (n-i)-1; j++) {
	// 		printf(" ");
	// 	}
	// 	// 별
	// 	// 1..3..5..7 순으로 증가하니까s
	// 	// 전체에서 - 공백만큼 빼면 = 별의개수
	// 	// 
	// 	for (int k = 0; k < 2*i+1; k++){
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }


	// 역피라미드 만들기

	// for(int i = 0; i < n; i++) {
	// 	for (int j = 0; j < i; j ++ ){
	// 		printf(" ");
	// 	}
	// 	// 9..7..5..3..1
	// 	for (int k = 0; k < 2*(n-i)-1; k++) {
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }

	// for(int i=0; i < n; i++) {
	// 	for (int j=0; j < (n-i)-1; j++) {
	// 		printf(" ");
	// 	}

	// 	for (int k = 0; k < 2*i+1; k++) {
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }

	// for(int i = 0; i < n-1; i++) {
	// 	for (int j = 0; j < i+1; j ++) {
	// 		printf(" ");
	// 	}
	// 	for (int k = 0; k < 2*(n-i)-3; k++) {
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }




	for(int i=0; i < n; i++) {
		for(int j = 0; j < i; j++) {	 
			printf(" ");
		}

		for(int k = 0; k < 2*(n-i)-1; k++) {
			printf("*");
		}
		printf("\n");
	}

	for(int i = 0; i < n-1; i ++) {
		
		for(int j = 0; j < n-i-2; j++) {
			printf(" ");
		}
		for(int k = 0; k < 2*i+3; k++) {
			printf("*");
		}
		printf("\n");
	}

	
}
