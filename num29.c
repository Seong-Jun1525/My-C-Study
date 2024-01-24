#include <stdio.h>
void num29() {
	int x, count;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("2를 곱하고 싶은 횟수 : ");
	scanf_s("%d", &count);
	printf("10<<%d의 값 : %d\n", count, x << count);
}