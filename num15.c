#include <stdio.h>
void num15() {
	// ������ ����
	double w, h, d, volume;

	printf("������ ����, ����, ���̸� �ѹ��� �Է�(�������� ����) : ");
	scanf_s("%lf %lf %lf", &w, &h, &d);
	
	volume = w * h * d;

	printf("������ ���Ǵ� %lf�Դϴ�.", volume);
}