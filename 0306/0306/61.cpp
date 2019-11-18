#include<iostream>
using namespace std;
int main() {
	double sum=0;
	int *arr = new int[5];
	cout << "Input 5 integer>>";
	for (int x = 0; x < 5; x++) {
		cin >> arr[x];
	}
	for (int y = 0; y < 5; y++) {
		sum += arr[y];
	}t
	sum /= 5;
	cout << "avg: " << sum<<endl;
	delete []arr;
}