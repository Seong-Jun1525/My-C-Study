#include <stdio.h>

void num6() {
	float x;
	float y;
	float z;
	float sum;
	float avg;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%f", &x);
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%f", &y);
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%f", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("���� %f�̰� ����� %f�Դϴ�.", x+y+z, (x+y+z)/3);
}