#include <stdio.h>
void num23() {
	// �� ���� ������ �Է¹޾� x�� y�� ���� ��� �������� ���ϱ�
	int x, y;
	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &x, &y);

	printf("�� : %d ������ : %d", x / y, x % y);
}