#include <stdio.h>
void num24() {
	// double�� �Ǽ� 2���� �Է¹޾Ƽ� �� �� �� ���� ���ϱ�
	double x, y;
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &x, &y);

	printf("%lf %lf %lf %lf", x+y, x-y, x*y, x/y);
}