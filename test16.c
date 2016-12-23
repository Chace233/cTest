#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 10

int main() {
	char * p = malloc(MAXLINE);
	char * longest = malloc(MAXLINE);
	int len = 0, max = 0;
	int c, maxline = MAXLINE;
	while ((c = getchar()) != EOF) {
		if (len >= maxline) {
			p = realloc(p, 2 * maxline);
			maxline = 2 * maxline;
		}
		if (c == '\n') {
			p[len] = '\0';
			++len;
		}
		if (len > max) {
			if (len > MAXLINE) {
				longest = realloc(longest, len);
			}
			longest = p;
			max = len;
		}
	}
	free(p);
	if (max > 0) {
		printf("最长为: %s \n", longest);
	}
	free(longest);
	return 0;
}
