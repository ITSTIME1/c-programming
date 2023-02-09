#include <stdio.h>



void swap(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


int main() {

	// call by value 와 call by reference 를 이해하기 위해서
	// 함수의 변수참조 방식을 이해해야 한다

	// 우리가 흔히 함수를 만들어서
	// 값을 넘겨주게 되는데
	// 이때 우리가 하는 이 행동을 인자를 함수의 매개변수로 넘겨준다고 한다
	// 즉 우리가 넘겨주는 값이 인자가 되는것이고
	// 함수의 입장에서 인자를 받는 것이기 때문에 함수의 변수는 매개변수라고 표현한다
	

	// c 언어에서는 함수의 매개변수의 복사된 값은 인자로 전달된 값과 전혀 다른 변수가 되기 때문에
	// 보통의 인자전달 방식으로는 함수에서 매개변수를 바꾼다고 해서 인자로 전달된 본 변수의 값이 바뀌진 않는다
	// 때문에 매개변수와 != 인자는 서로 다른 값을 가지고 있게 되는 것이고 단순 값만 복사하여 함수의 변수, origin 변수 서로 각각의 변수가 되는것이다.
	// 따라서 본래 변수값을 바꿀 필요가 없다면 그냥 보통 하는 방식처럼
	// call by value 방식으로 인자를 넘겨주면 된다.

	// call by reference 라는 방식이 있는데
	// 주소값을 전달하는 방식이다

	// 그럼 우리가 생각해야할 부분이 있는데
	// 포인터 변수를 사용해서 함수의 매개변수로 넘겨주는건 
	// call by referecne 라고 할 수 있을까?
	// 우선 개념적으로 주소값을 넘겨주는걸 call by referecne 라고 하니까
	// 의미적으론 맞는거 같다
	// 하지만 c언어에서 엄밀히 따지자면 주소값을 복사해서 매개변수에 넘겨주는 call by value 값이 된다
	// 하지만 그냥 값이 아닌 메모리주소의 값을 넘겨주는 것이므로 call by address 라고 지칭한다
	// 하지만 c언에서는 call by reference 를 공식적으로 지원하지 않기 때문에
	// call by address 를 이용해서 call by reference 기능을 사용한다고 보면된다.

	// 결과적으로 c언어 에서는 call by address == call by reference 가 된다는 것이다
	// 그럼 call by value == call by address 가 같을까? 다르다 값과 != 메모리의 주소값은 엄연히 다르다
	// 그럼 call by value = call by reference 가 같을까? 다르다 또한 주소값과 값은 다르기 때문이다


	// 그럼 한번 포인터 변수를 넘겨주는 방식을 코드로 짜본다면


	int a, b;
	a = 10;
	b = 20;

	printf("a : %d, b : %d\n", a, b);

	swap(&a, &b);


	printf("바뀐 a : %d, 바뀐 b : %d\n", a, b);

	
	return 0;
}

