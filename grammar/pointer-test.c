#include <stdio.h>

int main() {
	int i;

	// arr 배열의 크기가 3인 배열을 11,22,33으로 초기화
	int arr[3] = {11, 22, 33};
	// *ptr 포인터 변수에 배열의 주소값을 넣어줌.
	int *ptr = arr;

	// 포인터변수가 가르키는 주소값을 + 2만큼 증가 시키는데
	// int형이기 때문에
	// 8바이트 만큼 증가함.

	// 증가한 숫자 * int 자료형의 크기 만큼
	// 2만큼 증가하니까 * 4만큼 곱해서 더함.
	// 즉 값의 + 2를 더하라는게 아니라

	// 메모리 주소값의 자료형 * 더할값 n만큼 곱한 8바이트만큼 더하라는 것이기 때문에
	// 값의 변경이아닌 메모리 주소값의 변경이 이루어지는 것이다.
	

	// 주소값을 정상적으로 가르키고 있고
	printf("arr의 주소값 : %d\n", ptr);
	printf("arr의 값들 : %d %d %d\n", *(arr+0), *(arr+1), *(arr+2));
	// 그럼 int형 4바이트 * 바꿀 값 n = 20 만큼
	// 늘어난걸 볼 수 있다.

	// 현재연산이 들어가져있으면
	// 참조연산을 먼저하고 즉 주소값의 값을 참조하고 그 참조한 값을 증감연산자를 통해서 1 증가시킨다
	(*ptr)++;
	// 현재연산은 주소값을 먼저 증가시키고 그 다음에 변경된 메모리 주소의 값을 참조하는건데
	// 메모리 주소값을 4만큼 증가시킨다 int형이기 때문에
	*ptr++;	
	printf("arr의 바뀐 주소값 : %d\n", ptr);
	printf("arr의 값들 : %d %d %d\n", *(arr+0), *(arr+1), *(arr+2));
	return 0;
}