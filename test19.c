#include <stdio.h>

int main() {
	printf("int长度 : %lu\n", sizeof(int));
	printf("unsigned长度 : %lu\n", sizeof(unsigned int));
	printf("long长度 : %lu\n", sizeof(long));
	printf("short长度 : %lu\n", sizeof(short));
	printf("char长度 : %lu\n", sizeof(char));
	printf("float长度 : %lu\n", sizeof(float));
	printf("double长度 : %lu\n", sizeof(double));
}
