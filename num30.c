#include <stdio.h>
void num30() {
	double r;
	printf("구의 반지름을 구하시오 : ");
	scanf_s("%lf", &r);
	printf("표면적은 %lf입니다.", (double)(4 * 3.14 * r * r));
	printf("체적은 %lf입니다.", (double)(4 / 3) * 3.14 * r * r * r);
}