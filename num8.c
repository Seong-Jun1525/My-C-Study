#include <stdio.h>
void num8() {
	float w, h, area;
	printf("�ﰢ���� �غ�: ");
	scanf_s("%f", &w);
	printf("�ﰢ���� ����: ");
	scanf_s("%f", &h);

	area = w * h * 0.5;
	printf("�ﰢ���� ����: %f\n", area);
}