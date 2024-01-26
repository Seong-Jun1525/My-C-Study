#include <stdio.h>
void num31() {
	char c;
	printf("문자를 입력하시오 : ");
	c = getchar();

	switch (c) {
		case 'a':
		case 'i':
		case 'o':
		case 'u':
		case 'e':
			printf("모음입니다.");
			break;
		default:
			printf("자음입니다.");
			break;
	}
}