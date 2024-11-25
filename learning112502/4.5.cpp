#include "common.h"
int nex[100005];

void getnext(const char s[]) {
	int l = strlen(s);
	int i = 1;
	int j = 0;
	while (i + 1 <= l) {
		if (j == -1 || s[i] == s[j]) {
			i++;
			nex[i] = j + 1;
			j++;
		}
		else {
			j = nex[j];
		}
	}
}

int indexOf(const char s1[],const char s2[]) {
	int len1 = strlen(s1), len2 = strlen(s2);
	nex[0] = -1, nex[1] = 0;
	getnext(s2);
	int i = 0, j = 0;
	while (i < len1 && j < len2) {
		if (j == -1 || s1[i] == s2[j]) {
			i++;
			j++;
		}
		else {
			j = nex[j];
		}
		if (j == len2) {		
			return i-j;
		}
	}
	return -1;
}