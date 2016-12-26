#include <stdio.h>
#include "functions.h"
#include "mySort.h"

#define max(a, b) (a > b ? a : b)

int main() {
	double c = 0;
	getdouble(&c);
	printf("%f\n", c);
	return 0;
}
