#include <stdio.h>
void num29() {
	int x, count;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("2�� ���ϰ� ���� Ƚ�� : ");
	scanf_s("%d", &count);
	printf("10<<%d�� �� : %d\n", count, x << count);
}