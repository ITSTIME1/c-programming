#include <stdio.h>

int main() {
	double arr[2] = {1, 2};

	double *ptr = arr;

	printf("%d\n", ptr);
	// 그럼 double 이니까 8이 증가한거자나
	// int 4 만큼 증가
	*ptr++; 
	printf("%lf\n", *ptr);
	printf("%d", ptr);	
}