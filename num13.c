#include <stdio.h>

void num13() {
	// 16���� ������ �Է¹޾Ƽ� 8, 10, 16������ ���
	int data;

	printf("16���� ������ �Է��Ͻÿ� : ");
	scanf_s("%x", &data);

	printf("8���� - %#o\n", data); // 0�� �ٿ��� ��� 8���� ǥ��
	printf("10���� - %d\n", data);
	printf("16���� - %#x\n", data); // 0x�� �ٿ��� ��� 16���� ǥ��
}