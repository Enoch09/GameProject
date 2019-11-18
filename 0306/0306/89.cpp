#include<iostream>
using namespace std;

//int add(int a, int b) {
//	return a + b;
//}
int add(int a, int b=0, int c=0) {
	return a + b + c;
}

int main() {
	cout << add(6) << endl;
	cout << add(1, 2) << endl;
	cout << add(3,4,5) << endl;
}