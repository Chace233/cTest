#include <stdio.h>

#define IN 1
#define OUT 2

/* 统计输入的行数，单词数和字符数 */
int main() {
	int c, nl, nw, nc;
	nl = nw = nc = 0;
	int state = OUT;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT; 
		} else if(state == OUT) {
			state = IN;
			nw++;
		}
	}
	printf("行数: %d\n单词数: %d\n字符数: %d\n", nl, nw, nc);
	return 0;
}
