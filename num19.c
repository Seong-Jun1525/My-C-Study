#include <stdio.h>
void num19() {
	// 아스키코드값을 입력받아서 문자로 출력
	int c;
	
	printf("아스키 코드값을 입력하시오 : ");
	scanf_s("%d", &c);

	printf("문자 : %c입니다.", c);
}