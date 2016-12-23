#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAXOP 100
#define NUMBER '0'

int getop(char s[]);
void push(double);
double pop(void);

/*逆波兰计算器 */
int main() {
	int type;
	double op2;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 == 0.0) {
				printf("error: zero divisor\n");
			}
			else {
				push(pop() / op2);
			}
			break;
		case '\n':
			printf("\t%.8g\n",pop());
			break;
		default:
			printf("error:unknow command %s\n", s);
			break;
		}
	}
	return 0;
}
