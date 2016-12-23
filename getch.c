#include "calc.h"
#define BUFSIZE 100

char buf[BUFSIZE]; //用于ungetch函数存放的缓冲区
int bufp = 0; //buf中下一个空闲的位置

int getch(void) {
	return (bufp > 0 ? buf[--bufp] : getchar());
}

void ungetch(int c) {
	if (bufp < BUFSIZE) {
		buf[bufp++] = c;
	}
	else {
		printf("ungetch: too many characters\n");
	}
}
