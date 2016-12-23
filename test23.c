#include <stdio.h>

#define MAXLINE 1000

//int getLenght(char str[]) {
//	int i = 0;
	
//}

int getCode(char str[]) {
	int c, i;
	i = 0;
	while((c = getchar()) != EOF) {
		str[i] = c; 
		++i;
	}
	str[i] = '\0';
	return i;
}

int main() {
	int c;
	char str[MAXLINE];
	char ss[MAXLINE];
	int len = getCode(str);
	printf("\n\n%s \n长度为: %d\n", str, len);
	int i = 0, j = 0;
	while (i < len) {
		if (str[i] == '/' && str[i+1] == '/'){
			i = i + 2;
			while(str[i] != '\n') {
				++i;
			}
			if (str[i] == '\n') {
				++i;
			}
		}
		if (str[i] == '/' && str[i+1] == '*') {
			i = i + 2;
			while(str[i] != '*' && str[i+1] != '/') {
				++i;
			}
			if (str[i] == '*' && str[i+1] == '/') {
				i = i + 2;
			}
		}
		ss[j++] = str[i];
		++i;
	}
	printf("\n\n处理后的字符串:\n%s \n", ss);
	return 0;
}
