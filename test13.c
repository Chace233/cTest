#include <stdio.h>

void add (int b, int a) {
	b = a + 1;
}
int main() {
	int a = 0;
	int b;
	add(b ,a);
	printf("a : %d , b : %d \n", a, b);
	return 0;
}
