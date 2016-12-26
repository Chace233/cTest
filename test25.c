#include <stdio.h>

int main() {
	int x = 1, y = 2;
	int *p;
	p = &x;
	printf("*p : %d \n", *p);
	int c = *p;
	printf("c : %d \n", c);
	*p = 0;
	printf ("*p : %d , x : %d \n", *p, x);
	p = &y;
	printf("*p : %d \n", *p);
	return 0;
}
