#include <stdio.h>

void quickSort(int s[], int left, int right) {
	int l = left, r = right;
	while (l < r) {
		while (l < r && s[l] <= s[r]) {
			r--;
		}
		if (l < r) {
			int temp = s[l];
			s[l] = s[r];
			s[r] = temp;
		}
		while (l < r && s[l] <= s[r]) {
			l++;
		}
		if (l < r) {
			int temp = s[l];
			s[l] = s[r];
			s[r] = temp;
		}
	}
	if (l > left) {
		quickSort(s, left, l-1);
	}
	if (r < right) {
		quickSort(s, l+1, right);
	}
}
