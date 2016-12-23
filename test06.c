#include <stdio.h>

int main() {
	int c, n1, n2, n3;
	n1 = 0;
	n2 = 0;
	n3 = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++n1;
		}
		if (c == '\n') {
			++n2;
		}
		if (c == '\t') {
			++n3;
		}
	}
	printf("空格符：%d\n换行符：%d\n制表符：%d\n", n1, n2, n3);
	return 0;
}
