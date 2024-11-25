#include "common.h"

int parseHex(const char* const hexString) {
	int ret = 0;
	int i = 0;
	while (hexString[i]) {
		if (hexString[i] >= 'A') {
			ret += (int)(hexString[i]-'A'+10) * pow(16, i);
		}
		else {
			ret +=(int)( hexString[i]-'0') * pow(16, i);
		}
		
		i++;
	}
	return ret;
}