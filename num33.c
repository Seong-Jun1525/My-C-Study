#include <stdio.h>
#include <stdlib.h> // rand() �Լ� ���� ���̺귯��
void num33() {
	int x, computer;
	printf("�����Ͻÿ� : 1(����) 2(����) 3(��) --------------> ");
	scanf_s("%d", &x);

	computer = rand() % 3 + 1;
	printf("��ǻ�� : %d\n", computer);

	if (x == computer) {
		printf("�����");
	}
	else if (x + 1 == computer) {
		printf("����");
	}
	else {
		printf("�̰���");
	}
}