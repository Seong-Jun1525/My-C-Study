#include <stdio.h>
void num30() {
	double r;
	printf("���� �������� ���Ͻÿ� : ");
	scanf_s("%lf", &r);
	printf("ǥ������ %lf�Դϴ�.", (double)(4 * 3.14 * r * r));
	printf("ü���� %lf�Դϴ�.", (double)(4 / 3) * 3.14 * r * r * r);
}