#include<iostream>
using namespace std;
int main() {
	char buf[100];
	int count=0;
	cout << "input: ";
	cin.getline(buf,100);
	for (int i = 0; i < 100; i++) {
		if (buf[i] == 's') {
			count++;
		}
	}

	cout <<"s:"<<count;
}