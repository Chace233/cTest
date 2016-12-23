#include <stdio.h>
#include <stdlib.h>

int main() {
	char * p = malloc(10 * sizeof(char));
	int c, len;
	int oldLen = 10;
	while((c = getchar()) != EOF && c != '\n') {
		if (len >= oldLen) {
			p = realloc(p, 2 * oldLen);
			oldLen = 2 * oldLen;
		}
		p[len] = c;
		++len;
	}
	if (c == '\n') {
		p[len] = '\0';
	}
	printf("[] : %s \n", p);
	return 0;
}
