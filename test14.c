#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline) {
	int c, i;
	for(i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0') {
		++i;
	}
}

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;
	while(((len = get_line(line, MAXLINE)) > 0)) {
		if (len > max) {
			copy(longest, line);
			max = len;
		}
	}
	if (max > 0) {
		printf("最长的为: %s\n", longest);
	}
	return 0;
}
