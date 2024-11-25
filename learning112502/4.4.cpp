#include "common.h"

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]){
	int l = 1, r = 1, i = 1;

	while (l <= size1 && r <= size2) {
		if (list1[l] <= list2[r]) {
			if (list1[l] != list1[l - 1]) {
				list3[i] = list1[l];
				i++;
			}l++;
		}
		else {
			if (list2[r] != list2[r - 1]) {
				list3[i] = list2[r];
				i++;
			}		
			r++;
		}
	}
	if (l > size1) {
		while (r <= size2) {
			if (list2[r] != list2[r - 1]) {
				list3[i] = list2[r];
				i++;
			}
			r++;
		}
	}
	else if(r>size2){
		while (l <= size1) {
			if (list1[l] != list1[l - 1]) {
				list3[i] = list1[l];
				i++;
			}l++;
		}
	}
	for (int k = 1; k < i; k++) {
		cout << list3[k] << " ";
	}
}