#include <stdio.h>

void num6() {
	float x;
	float y;
	float z;
	float sum;
	float avg;

	printf("실수를 입력하시오 : ");
	scanf_s("%f", &x);
	printf("실수를 입력하시오 : ");
	scanf_s("%f", &y);
	printf("실수를 입력하시오 : ");
	scanf_s("%f", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("합은 %f이고 평균은 %f입니다.", x+y+z, (x+y+z)/3);
}