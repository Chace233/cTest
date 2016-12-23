#include <stdio.h>

int power(int m, int n) {
	int i = 1;
	int base = 1;
	for (; i <= n; ++i) {
		base = m * base;
	}
	return base;
} 

int main() {
	int m = 2;
	int n = 5;
	printf("%d的%d次是: %d \n", m, n, power(m,n));
	return 0;
}
