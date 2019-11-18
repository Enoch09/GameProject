#include<iostream>
using namespace std;
class Sample {
	int *p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[n];
	}
	void read();
	void write();
	int big();
};
void Sample::read() {
	cout << "Input 10 integer>> ";
	for (int x = 0; x < 10; x++) {
		cin >> p[x];
	}
}
void Sample::write() {
	for (int x = 0; x < 10; x++)
		cout<< p[x]<<" ";
	cout << endl;
}
int Sample::big() {
	int max = p[0];
	for (int x = 0; x < 10; x++) {
		if (max < p[x])
			max = p[x];
	}
	return max;
}
int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "max: " << s.big() << endl;
}