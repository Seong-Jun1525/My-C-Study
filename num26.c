#include <stdio.h>
void num26() {
	int height;
	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &height);

	printf("%dcm는 %d피트 %f인치 입니다.", height, height / (int)(2.54 * 12), height / 2.54);
}