#include <stdio.h>
void num28() {
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);

	printf("%d ������ 2�Ǻ��� : %d\n", x, ~x + 1);
}