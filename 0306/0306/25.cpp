#include<iostream>
using namespace std;
int main() {
	char yes[100];
	while (true)
		cout << "input: ";
		cin.getline(yes, 100);
		if (strcmp(yes, "yes") == 0)
			break;
	}
	cout << "= the end =";
}