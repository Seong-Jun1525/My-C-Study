#include <stdio.h>
void num20() {
	char a = 'a'; // "로 묶으면 출력x
	printf("%c %c %c\n", a + 1, a + 2, a + 3);
}