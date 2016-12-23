#include <stdio.h>
#include "calc.h"
#include "functions.h"
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double s) {
	if (sp < MAXVAL) {
		val[sp++] = s;
	}
	else {
		printf("error: stack full, cannot push %g\n",s);
	}
}

double pop() {
	if (sp > 0) {
		return val[--sp];
	}
	else {
		printf("stack empty\n");
		return 0.0;
	}
}

double getTop() {
	if (sp > 0) {
		return val[sp-1];
	}
	else {
		printf("stack empty\n");
		return 0.0;
	}
}

void mkEmpty() {
	sp = 0;
}

int isEmpty() {
	return (sp > 0 ? 1 : -1);
}



