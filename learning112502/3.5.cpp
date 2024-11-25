#include "common.h"

int houzi(int n,int day) {
	if (day == 10)return n;
	houzi((n + 1) * 2, day + 1);
}