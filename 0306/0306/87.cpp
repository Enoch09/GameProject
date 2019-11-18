#include<iostream>
using namespace std;

int big(int a, int b) {
	return(a > b) ? a : b;
}
int big(int *a, int b) {
	int max = a[0];
	for (int x = 0; x < b; x++) {
		if (max < a[x])
			max = a[x];
	}
	return max;

}

int main() {
	int arr[5] = { 0,8,-3,7,5 };
	cout << big(4, 6) << endl;
	cout << big(arr, 6) << endl;
}