#include <stdio.h>

int main() {
	int nums[26];
	int i;
	for (i = 0; i < 26; i++) {
		nums[i] = 0;
	}
	int n;
	while ((n = getchar()) != EOF) {
		if (n >= 'a' && n <= 'z') {
			i = n - 'a';
			++nums[i];		
		}
	}
	for (i = 0; i < 26; i++) {
		if (nums[i] != 0) {
			printf("%c : %d \n", i+'a', nums[i]);
		}
	}
	return 0;
}
