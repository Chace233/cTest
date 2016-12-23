#include <stdio.h>

#define MAXLINE 5

void copy(char to[], char from[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}

int getLine(char s[]) {
	int i = 0, c;
	int maxline = MAXLINE;
	while((c = getchar()) != EOF && c != '\n') {
		if (i >= maxline) {
			char sc[2 * maxline];
			copy(sc, s);
			char s[2 * maxline];
			copy(s, sc);
			maxline = 2 * maxline;
		}
		if (c != '\n' && c != '\0') {
			s[i] = c;
			++i;
		}
	}
	if (c == '\n') {
		s[i] = '\0';
		++i;
	}
	return i;
}

int main() {
	int len , max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];
	while((len = getLine(line)) > 0) {
		printf("长度是: %d", len);
		if (len > max) {
			if (len >= MAXLINE)
				char longest[len+1];
			copy(longest, line);
			max = len;
		}
	}
	if (max > 0) {
		printf("最长的是: %s\n", longest);
	}
}
