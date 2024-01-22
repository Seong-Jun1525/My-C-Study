#include <stdio.h>

void num11() {
	float weightOnEarth, moonOnWeight;
	printf("몸무게를 입력하세요(단위: kg) : ");
	scanf_s("%f", &weightOnEarth);

	moonOnWeight = weightOnEarth * 0.17;
	printf("달에서의 몸무게는 %fKg입니다.", moonOnWeight);
}