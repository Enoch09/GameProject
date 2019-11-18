#include<iostream>
#include "91.h"
using namespace std;

//int add(int *a, int size) {
//	int sum = 0;
//	for (int x = 0; x < size; x++) {
//		sum += a[x];
//	}
//	return sum;
//}
int add(int *a, int size ,int *b=NULL) {
	int sum = 0;
	for (int x = 0; x < size; x++) {
		sum += a[x];
	}
	if (b == NULL)
		return sum;
	for (int y = 0; y < size; y++) {
		sum += b[y];
	}
	return sum;
}


int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };

	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}