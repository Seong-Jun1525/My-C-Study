#include <stdio.h>
const double SQMETER_PER_PYEONG = 3.3058; // 1�� = 3.3m���� ��ȣ ����� ����

void num16() {
	// ���� �������ͷ� ȯ�� 1�� = 3.3m��
	double x, area;

	printf("���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &x);

	area = SQMETER_PER_PYEONG * x;
	printf("%lf�������Դϴ�.", area);
}