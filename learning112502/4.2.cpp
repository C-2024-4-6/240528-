#include "common.h"

void mysort(double list[],int listSize) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 1; j <= listSize-1; j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
	for (int i = 1; i <= 10; i++) {
		cout << list[i] << " ";
	}
}
