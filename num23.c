#include <stdio.h>
void num23() {
	// 두 개의 정수를 입력받아 x를 y로 나눈 몫과 나머지를 구하기
	int x, y;
	printf("두 개의 정수를 입력하시오 : ");
	scanf_s("%d %d", &x, &y);

	printf("몫 : %d 나머지 : %d", x / y, x % y);
}