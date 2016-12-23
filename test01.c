#include <stdio.h>
/*华摄氏度转摄氏度
  C = (5/9)*(F-32)
*/
int main() {
    float f, c;
    int low, upper, step;
    low = 0;
    upper = 300;
    step = 20;
    f = low;
    while (f <= upper) {
        c = (5.0 / 9.0) * (f - 32);
        printf("%3.0f   %6.1f\n", f, c);
		f = f + step;
    }
    return 0;
}
