#include<iostream>
using namespace std;
int main() {
	int k, n = 0, sum = 0;
	cout << "input num(>0): ";
	cin >> n;
	for (k = 1; k <= n; k++)
		sum += k;
	cout << "sum(1~" << n << "): " << sum << endl;
}