#include <stdio.h>

void num10() {
	float x, result;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%f", &x);

	result = 3 * x * x + 7 * x + 11;
	printf("���׽��� ���� %f", result);
}