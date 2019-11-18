#include<iostream>
using namespace std;
char& find(char a[], char c, bool& success);
int main() {
	char str[] = "sunriN";
	bool b = false;
	char &loc = find(str, 'N', b); // 못찾으면 loc는 s[0]가 되자.
	if (b == false) {
		cout << "N does not exist." << endl;
		return 0;
	}
	loc = 'n';
	cout << str << endl;
}

char& find(char a[], char c, bool& success) {

	for (int i = 0; i < 6; i++) {
		if(a[i]==c)
	}
	// find()함수를 이곳에 정의하여 프로그램을 완성해보세요.

}