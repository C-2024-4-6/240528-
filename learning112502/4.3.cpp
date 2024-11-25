#include "common.h"

void guizi() {
	bool a[105] = { 0 };
	for (int i = 1; i <=100; i++) {
		int k = i;
		while (k <= 100) {
			a[k] = !a[k];
			k += i;
		}		
	}
	for (int i = 1; i <= 100; i++) {
		if (a[i])cout << i << " ";
	}

}