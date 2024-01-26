#include <stdio.h>
void num32() {
	int x, y;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &y);

	if (x % y == 0) {
		printf("약수입니다.\n");
	}
	else {
		printf("약수가 아닙니다.\n");
	}
}