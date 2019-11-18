#include<iostream>
#include<string>
using namespace std;
int main() {
	string Tom, Jack;

	cout << "Tom>> ";
	cin >> Tom;
	cout << "Jack>> ";
	cin >> Jack;

	if (Tom == "rock") {
		if (Jack == "rock")
			cout << "To tie" << endl;
		if (Jack == "scissors")
			cout << "Tom win" << endl;
		if (Jack == "paper")
			cout << "Jack win" << endl;
	}
	else if (Tom == "scissers") {
		if (Jack == "rock")
			cout << "Jack win" << endl;
		if (Jack == "scissors")
			cout << "To tie" << endl;
		if (Jack == "paper")
			cout << "Tom win" << endl;
	}
	else if (Tom == "paper") {
		if (Jack == "rock")
			cout << "Tom win" << endl;
		if (Jack == "scissors")
			cout << "Jack win" << endl;
		if (Jack == "paper")
			cout << "To tie" << endl;
	}
}