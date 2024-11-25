#include"common.h"
//#include "3.4mytriangle.h"
//#include "3.1.h"
//#include "3.2.h"
//#include "3.5.h"
//#include "4.1.h"
//#include "4.2.h"
//#include "4.3.h"
//#include "4.4.h"
//#include "4.5.h"
//#include "4.6.h"
//#include "4.2.1.h"
#include "4.2.2.h"

/*int main() {
	
	ios::sync_with_stdio(false);
	//3.1
	//	int n, m;
	//	cin >> n >> m;
	//	int res_gcd=gcd(n,m);
	//	int lcm = find(n, m);
	//	cout << res_gcd << " " << lcm;

	//3.2
	//	find(40000);
	//	int k2 = 0, i2 = 1;
	//	while (k2 < 200) {
	//		i2++;
	//		if (is_Prime(i2)) {
	//			k2++;
	//			cout << i2 << " ";
	//			if (k2 % 10 == 0)cout << "\n";
	//		}
	//		
	//	}

	//3,3
	//	double a, b, c;
	//	cin >> a, b, c;
	//	if (!is_valid(a, b, c)) {
	//		cout << "invalid input!\n";
	//		return 0;
	//	}
	//	cout << double_area(a, b, c);

	//	int ret=houzi(1, 0);
	//	cout << ret;

	//4.1
	// cout<<"Enter 10 numbers\n";
	// cout<<"The distinct numbers are:\n"
	//	sortnum();

	//4.2
	//double a[15];
	// 
	//for (int i = 1; i <= 10; i++) {
	//	cin >> a[i];
	//}
	// 
	//mysort(a,10);
	
	//4.3
	//guizi();

	/*4.4
	int a1[85] = { 0 }, a2[85] = { 0 };
	cout << "Enter list1:";
	int i = 1;
	int a;
	while (cin >> a) {
		a1[i]=a;
		i++;
		if (cin.get() == '\n')break;
		
	}
	sort(a1 + 1, a1 + i + 1);
	cout << "Enter list2:";
	int l = 1;
	while (cin >> a) {
		a2[l]=a;
		l++;
		if (cin.get() == '\n')break;
	}
	sort(a2 + 1, a2 + l + 1);
	int a3[170] = { 1 };	
	cout << "The merged list is: ";
	merge(a1, i, a2, l, a3);
	
	/*4,5
	string s1, s2;
	char c1[100005], c2[100005];
	cout << "Enter the first string: \n";
	getline(cin, s1);
	strcpy_s(c1, s1.data());
	cout << "Enter the second string: \n";
	getline(cin, s2);
	strcpy_s(c2, s2.data());
	int ret=indexOf(c2,c1);
	cout << "indexOf(“" << s1 << "”, “" << s2 << "”) is " << ret;

	/*4.6
	string s1;
	char c[100005];
	getline(cin, s1);
	strcpy_s(c, s1.data());
	int ret[26] = { 0 };
	
	count(c, ret);
	
}*/

//void main()
//{
//	int i, j, *pi, *pj;     //此处的*表示定义指针变量，而非间接运算符
//	 pi = &i;
//	pj = &j;
//	i = 5; j = 7;
//	cout << i << '\t' << j << '\t' << pi << '\t' << pj;
//	cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
//}

//int main() {
//	string s;
//	cin >> s;
//
//	char c[10005] = {'0'};
//	int len = s.length();
//	for (int i = 0; i < len; i++) {
//		c[i] = s[len-i-1];
//	}
//	
//	cout<<parseHex(c);
//
//}

void mysort(int a[], int len) {

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (*(a + j) > *(a + j + 1)) {
				int temp = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = temp;
			}
		}
	}

}

int main() {
	int len;
	cout << "cin array length\n";
	cin >> len;
	int* a = new int[len];
	for (int i = 0; i < len; i++) {
		cin >> *(a+i);
		
	}
	mysort(a, len);
	for (int i = 0; i < len; i++) {
		cout << *(a + i) << " ";
	}
}