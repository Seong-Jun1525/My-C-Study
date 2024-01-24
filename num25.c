#include <stdio.h>
void num25() {
	int x, y, z;

	printf("3개의 정수를 입력 : ");
	scanf_s("%d %d %d", &x, &y, &z);

	printf("최대값 : %d\n", (x > y && x > z) ? x : (y > z ? y : z));
}