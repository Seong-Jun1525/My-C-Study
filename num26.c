#include <stdio.h>
void num26() {
	int height;
	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf_s("%d", &height);

	printf("%dcm�� %d��Ʈ %f��ġ �Դϴ�.", height, height / (int)(2.54 * 12), height / 2.54);
}