#include<iostream>
using namespace std;
bool bigger(int a, int b, int &big)
{
	
	if (a == b) {
		return false;
	}
	else {
		if (a > b) {
			big = a;
		}
		else if (a < b) {
			big = b;
		}
	}
	return big;
}
int main() {
	int a, b, big;
	cin >> a >> b;
	bigger(a,b,big);
	
	if (a == b) {
		cout << "equal" << endl;
	}
	else {
		cout << big << endl;
	}
}