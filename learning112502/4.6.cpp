#include"common.h"

void count(const char s[], int counts[]) {
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			counts[s[i] - 'a']++;
		}
		else if ('A' <= s[i] && s[i] <= 'Z') {
			counts[s[i] - 'A']++;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		if (counts[i]){
			cout << (char)(i + 'a') << " : " << counts[i]<< "times\n";
		}
	}
}