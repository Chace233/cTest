#include <stdio.h>
#include <stdlib.h>

int lenght(char* s) {
	int len = 0;
	while(s[len] != '\n' && s[len] != '\0') {
		++len;
	}
	return ++len;
}

char* reverse(char* s, char* ss) {
	int len = lenght(s);
	//char* ss = malloc(len);
	for (int i = 0; i < len; i++) {
		ss[i] = s[len - i - 1];
	}
	return ss;
}

int main() {
	int c, len = 0, l = 10;
	char* p = malloc(10);
	while((c = getchar()) != '\n' && c != EOF) {
		if (len >= l) {
			l = 2 * l;
			p = realloc(p, l);
		}
		p[len] = c;
		++len;
	}
	char* r = malloc(len);
	reverse(p, r);
	free(p);
	printf("原字符串: %s \n翻转后的: %s \n", p, r);
	free(r);
	return 0;
}
