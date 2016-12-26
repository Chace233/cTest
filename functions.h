#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000
#define max(a, b) (a > b ? a : b)
#define square(x)  (x) * (x)
#define paste(front, back) front ## back

char buf[MAXLINE]; //用于存放ungetch()的缓冲区
int bufp = 0;

int getch() {
	return bufp > 0 ? buf[--bufp] : getchar();
} 

void ungetch(int c) {
	if (bufp > MAXLINE) {
		printf("error: too many characters\n");
	}
	else {
		buf[bufp++] = c;
	}
}

int getint(int *pn) {
	int c, sign;
	while (isspace((c = getch()))) {
		;
	}
	if (!isdigit(c) && c != '-' && c != '+' && c != EOF) {
		ungetch(c);
		return 0;
	}
	sign = (c == '-' ? -1 : 1);
	if (c == '-' || c == '+') {
		c = getch();
	}
	for (*pn = 0; isdigit(c); c = getch()) {
		*pn = 10 * (*pn) + (c - '0');
	}
	*pn *= sign;
	if (c != EOF) {
		ungetch(c);
	}
	return c;
}

double getdouble(double *p) {
	double sign;
	double c;
	double base = 1.0;
	while (isspace(c = getch())) {
		;
	}
	if (!isdigit(c) && c != '-' && c != '+' && c != EOF) {
		ungetch(c);
		return 0.0;
	}
	sign = (c == '-' ? -1.0 : 1.0);
	for (*p = 0; isdigit(c); c = getch()) {
		*p = 10.0 * *p + (c - '0');
	}
	if (c == '.' && c != EOF) {
		c = getch();
	}
	while (isdigit(c)) {
		*p = 10.0 * *p + (c - '0');
		base *= 10.0;
		c = getch();
	}
	*p = *p / base * sign;

	return c;
}

int strrindex(char s[], char t[]) {
	int i, j, k;
	for (i = 0; s[i] != '\0'; i++) {
		for (j = i, k = 0; t[k] != '\0' && t[k] == s[j]; j++, k++) {
			;
		}
		if (k > 0 && t[k] == '\0') {
			return j;
		}
	}
	return -1;
}

int getLine(char line[], int max) {
     int c, i = 0;
     while (--max > 0 && (c=getchar()) != EOF && c != '\n') {
         line[i++] = c;
     }
     if (c == '\n') {
         line[i++] = c;
     }
     line[i] = '\0';
     return i;
}

double atof(char s[]) {
	double val, power, sign;
	int i;
	for(i = 0; isspace(s[i]); i++) {
		;
	}
	sign = (s[i] == '-' ? -1 : 1);
	if (s[i] == '+' || s[i] == '-') {
		i++;
	}
	for (val = 0.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
	}
	if (s[i] == '.') {
		i++;
	}
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	return (sign * val / power);
}

//打印数字
void printd(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10) {
        printd(n / 10);
    }
    putchar(n % 10 + '0');
}

//交换数组两个数
void swap(int s[], int i, int j) {
	int temp = s[i];
	s[i] = s[j];
	s[j] = temp;
}

//打印数组
void printS(int s[], int len) {
	int i = 0;
	for (; i < len; i++) {
		printf("%d  ", s[i]);
	}
	putchar('\n');
}

//将整数转换为字符串
void itoa(int n, char str[], int index) {
	if (n < 0) {
		str[index++] = '-';
		n = -n;
	}
	if (n / 10) {
		itoa(n / 10, str, index-1);
	}
	str[index] = (n % 10 + '0');
}

void swapNum(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
