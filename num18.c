#include <stdio.h>
void num18() {
	// � �������� ����ϴ� ���α׷� E=mv��/2.0
	double m, v, E;

	printf("������ �Է��ϼ���(kg) : ");
	scanf_s("%lf", &m);

	printf("�ӵ��� �Է��ϼ���(m/s) : ");
	scanf_s("%lf", &v);

	E = m * v * v * 0.5;

	printf("�������(J) : %lf\n", E);
}