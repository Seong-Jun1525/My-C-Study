#include <stdio.h>
void num25() {
	int x, y, z;

	printf("3���� ������ �Է� : ");
	scanf_s("%d %d %d", &x, &y, &z);

	printf("�ִ밪 : %d\n", (x > y && x > z) ? x : (y > z ? y : z));
}