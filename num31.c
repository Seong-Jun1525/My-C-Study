#include <stdio.h>
void num31() {
	char c;
	printf("���ڸ� �Է��Ͻÿ� : ");
	c = getchar();

	switch (c) {
		case 'a':
		case 'i':
		case 'o':
		case 'u':
		case 'e':
			printf("�����Դϴ�.");
			break;
		default:
			printf("�����Դϴ�.");
			break;
	}
}