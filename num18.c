#include <stdio.h>
void num18() {
	// 운동 에너지를 계산하는 프로그램 E=mv²/2.0
	double m, v, E;

	printf("질량을 입력하세요(kg) : ");
	scanf_s("%lf", &m);

	printf("속도를 입력하세요(m/s) : ");
	scanf_s("%lf", &v);

	E = m * v * v * 0.5;

	printf("운동에너지(J) : %lf\n", E);
}