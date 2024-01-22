#include <stdio.h>

void num12() {
	// 실수를 입력받아서 소수점 표기 방법과 지수 표기 방법으로 동시에 출력
	float x;
	
	printf("실수를 입력하시오 : ");
	scanf_s("%f", &x);

	printf("실수형식으로는 %f입니다.\n", x);
	printf("지수형식으로는 %e입니다.\n", x);
}