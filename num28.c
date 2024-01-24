#include <stdio.h>
void num28() {
	int x;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);

	printf("%d 정수의 2의보수 : %d\n", x, ~x + 1);
}