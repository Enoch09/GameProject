#include<iostream>
using namespace std;
class Sample {
	int a;
public:
	Sample() { a = 100; cout << a << ' '; }
	Sample(int x) { a = x; cout << a << ' '; }
	Sample(int x, int y) { a = x * y; cout << a << ' '; }
	int getA() { return a; }
};
int main() {
	Sample arr[3];
	Sample *p;
	p = arr;
	int sum = 0;
	for (int x = 0; x < sizeof(arr); x++) {
		sum = sum + p[x].getA();
	}
	cout << "sum: " << sum << endl;
	Sample arr2D[2][2] = { {Sample(2,3),Sample(2,4)},{Sample(5),Sample()} };
	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 2; y++) {
			sum = sum + arr2D[x][y].getA();
		}
	}
	cout << "arr2D: " << sum << endl;
}
//4,4,