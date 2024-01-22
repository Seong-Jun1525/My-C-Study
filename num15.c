#include <stdio.h>
void num15() {
	// 상자의 부피
	double w, h, d, volume;

	printf("상자의 가로, 세로, 높이를 한번에 입력(공백으로 구분) : ");
	scanf_s("%lf %lf %lf", &w, &h, &d);
	
	volume = w * h * d;

	printf("상자의 부피는 %lf입니다.", volume);
}