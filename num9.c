#include <stdio.h>

void num9() {
	double f, c;

	printf("화씨 값을 입력하세요 : ");
	scanf_s("%lf", &f);

	c = (5.0 / 9.0) * (f - 32.0);
	printf("섭씨 값은 %lf입니다.\n", c);
}