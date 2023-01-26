#include <stdio.h>

int main() {

	// To print float, we have to %f format specifier.
	// To print double, we have to %lf format specifier.
	// To print integer, we have to %d format specifier. 
	float number1 = 13.5;
	double number2 = 12.4;
	int testInteger = 5;
	// To print character, we have to %c format specifer.
	// char 는 문자를 저장하는 타입이지만
	// 실제로는 정수형 변수이다 왜냐하면 ch에 값을 초기화 하지 않았을경우
	// 해당 값에는 정수형 수가 들어가 있다
	// 컴퓨터는 0, 1로만 이해할 수 있기 때문에
	// 문자 같은 것도 0, 1로 변환할 수 밖에 없다.
	// 따라서 문자도 0, 1로 변환할 수 있다
	// 아스키 카드 값으로 나온다

	char ch = 'b';
	printf("character : %c\n", ch);
	printf("character : %d\n", ch);
	printf("Number = %d",testInteger);
	printf("number1 = %f\n", number1);
	printf("number2 = %lf\n", number2);

	// To get input, we have to use standard input function.

	int inputInteger;
	printf("Enter an integer : ");
	scanf("%d", &inputInteger);
	printf("%d\n", inputInteger);
	return 0;
}

