#include <stdio.h>
#include <string.h>

struct student {
	int grade;
	int num;
	char name[10];
};

int main() {
	
	// 구조체(클래스)생성
	struct student people;
	// 구조체 포인터변수 생성
	struct student *person;
	// people 주소값 person 할당
	person = &people;


	// string.h 파일로 구조체 값 컨트롤
	(*person).grade = 10;
	strcpy((*person).name, "Morph");
	printf("%s\n", (*person).name);
	printf("%d\n", (*person).grade);

	return 0;	
}