#include <stdio.h>

void num11() {
	float weightOnEarth, moonOnWeight;
	printf("�����Ը� �Է��ϼ���(����: kg) : ");
	scanf_s("%f", &weightOnEarth);

	moonOnWeight = weightOnEarth * 0.17;
	printf("�޿����� �����Դ� %fKg�Դϴ�.", moonOnWeight);
}