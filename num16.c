#include <stdio.h>
const double SQMETER_PER_PYEONG = 3.3058; // 1평 = 3.3m²을 기호 상수로 선언

void num16() {
	// 평을 제곱미터로 환산 1평 = 3.3m²
	double x, area;

	printf("평을 입력하시오 : ");
	scanf_s("%lf", &x);

	area = SQMETER_PER_PYEONG * x;
	printf("%lf평방미터입니다.", area);
}