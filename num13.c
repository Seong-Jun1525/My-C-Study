#include <stdio.h>

void num13() {
	// 16진수 정수를 입력받아서 8, 10, 16진수로 출력
	int data;

	printf("16진수 정수를 입력하시오 : ");
	scanf_s("%x", &data);

	printf("8진수 - %#o\n", data); // 0을 붙여서 출력 8진수 표기
	printf("10진수 - %d\n", data);
	printf("16진수 - %#x\n", data); // 0x를 붙여서 출력 16진수 표기
}