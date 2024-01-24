#include <stdio.h>
void num24() {
	// double형 실수 2개를 입력받아서 합 차 곱 몫을 구하기
	double x, y;
	
	printf("실수를 입력하시오 : ");
	scanf_s("%lf %lf", &x, &y);

	printf("%lf %lf %lf %lf", x+y, x-y, x*y, x/y);
}