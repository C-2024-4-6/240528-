#include "common.h"

void sortnum() {
	int prime[15] = { 0 }, a, ret[15] = { 0 };
	int cnt = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> a;
		if (!prime[a]) {
			ret[i] = a;
			cnt++;
		}
		prime[a]++;
	}
	for (int i = 1; i < 15; i++) {
		if (ret[i])cout << ret[i] << " ";
	}
}