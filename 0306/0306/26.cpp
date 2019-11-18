#include<iostream>
using namespace std;
int main() {
	char c[100];
	int size;
	cout << "input :";
	cin.getline(c, 100);
	size = strlen(c);
	for (int i = 0; i <= size; i++) {
		for (int j = 0; j < i; j++) {
			cout << c[j];
		}
		cout << "\n";
	}
}