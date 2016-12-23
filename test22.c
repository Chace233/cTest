#include <stdio.h>
#include <string.h>

int main() {
	char arr[15] = "hello , world";
	arr[14] = '!';
	printf("字符串长度: %lu\n", strlen(arr));
	printf("%s\n", arr);	
}
