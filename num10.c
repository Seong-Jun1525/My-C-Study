#include <stdio.h>

void num10() {
	float x, result;

	printf("실수를 입력하시오 : ");
	scanf_s("%f", &x);

	result = 3 * x * x + 7 * x + 11;
	printf("다항식의 값은 %f", result);
}