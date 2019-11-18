#include<iostream>
using namespace std;

int sum(int a, int b) {
	int x,sum=0;
	for (x = 0; x <= b-a+1; x++) {
		sum += a;
	}
	return sum;
}
int sum(int a) {
	int x, sum=0;
	for (x = 0; x <= a; x++) {
		sum += x;
	}
	return sum;
}

int main() {
	cout << "sum =" << sum(3, 5) << endl;
	cout << "sum =" << sum(6) << endl;
	cout << "sum =" << sum(100) << endl;

}