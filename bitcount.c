//统计一个十进制数转换为二进制后有多少个1
#include <stdio.h>

int bitCount(int x) {
	int i = 0;
	while (x != 0) {
		x &= (x-1);
		++i;
	}
	return i;
}

int main() {
	int x;
	scanf("%d", &x);
	int i = bitCount(x);
	printf("%d的二进制中有%d个1\n", x, i);
	return 0;
}
