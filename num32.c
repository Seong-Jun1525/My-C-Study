#include <stdio.h>
void num32() {
	int x, y;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &y);

	if (x % y == 0) {
		printf("����Դϴ�.\n");
	}
	else {
		printf("����� �ƴմϴ�.\n");
	}
}