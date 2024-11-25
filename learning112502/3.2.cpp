#include "common.h"
const int M = 6e4 + 8;
bool prime[M];
int ret[M];
int k = 0;

int n;
void find(int num) {
	for (int i = 2; i <= num; i++) {
		prime[i] = 1;
	}
	for (int i = 2; i <= num; i++) {
		if (prime[i] == 1) {
			k++;
			ret[k] = i;
		}
		for (int j = 1; j <= k; j++) {
			int x = i * ret[j];
			if (x > num)break;
			prime[x] = 0;
			if (i % ret[j] == 0)break;
		}
	}
}

bool is_Prime(int num) {
	for (int i = 1; i <= k; i++) {
		if (ret[i] > num)break;
		if (ret[i] == num)return true;	
	}
	return false;
}
