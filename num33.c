#include <stdio.h>
#include <stdlib.h> // rand() 함수 포함 라이브러리
void num33() {
	int x, computer;
	printf("선택하시오 : 1(가위) 2(바위) 3(보) --------------> ");
	scanf_s("%d", &x);

	computer = rand() % 3 + 1;
	printf("컴퓨터 : %d\n", computer);

	if (x == computer) {
		printf("비겼음");
	}
	else if (x + 1 == computer) {
		printf("졌음");
	}
	else {
		printf("이겼음");
	}
}