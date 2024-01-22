#include <stdio.h>
void num8() {
	float w, h, area;
	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf_s("%f", &w);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf_s("%f", &h);

	area = w * h * 0.5;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %f\n", area);
}