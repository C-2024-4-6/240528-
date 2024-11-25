#include "common.h"

int gcd(int n, int m) {
	if (n % m == 0)return m;
	else return gcd(m, n % m);
}

int find(int& n, int& m) {
	int res_gcd= gcd(n, m);
	return  n * m / res_gcd;
}

