#include <stdio.h>

int main() {
	int len[20];
	for (int i = 0; i < 20; i++) {
		len[i] = 0;
	}
	int l = 0;
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			++len[l];
			l = 0;
		}
		if (c >= 'a' && c <= 'z') {
			++l;
		}
	}
	c = getchar();
	if (c == EOF) {
		for (int i = 1; i < 20; i++) {
            if (len[i] > 0) {
                printf("长度为%d : ", i);
                int j = len[i];
                while (j > 0) {
                    printf("1");
                    j--;
                }
                printf("\n");
            }
        }
	}
}
