#include <ctype.h>
#include "calc.h"

int getch(void); 
void ungetch(int);
/* getop函数：获取下一个运算符或者数值操作数 */
int getop(char s[]) {
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t') {
		;
	}
	s[1] = '\0';
	if (!isdigit(c) && c != '.') {
		return c; //不是数
	}
	i = 0;
	if (isdigit(c)) { //收集整数部分
		while (isdigit(s[++i] = c = getch())) {
			;
		}
	}
 	if (c == '.') {
		while (isdigit(s[++i] = c = getch())) {
			;
		}
	}
	s[i] = '\0';
	if (c != EOF) {
		ungetch(c);
	}
	return NUMBER;
}
