#include <stdio.h>

#define IN  1
#define OUT 2

int main() {
	int c;
	int state = OUT;
	while ((c = getchar()) != EOF) {
		putchar(c);
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				putchar('\n');
			}
			state = OUT;
		} else {
			state = IN;
		}
	}
	return 0;
}
