#include <stdio.h>
void num7() {
	float m;
	float result;
	
	printf("마일을 입력하세요 : ");
	scanf_s("%f", &m);

	result = m * 1609;

	printf("%f마일은 %f미터 입니다.", m, result);
}