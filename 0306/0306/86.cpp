#include<iostream>
using namespace std;
char& find(char a[], char c, bool& success);
int main() {
	char str[] = "sunriN";
	bool b = false;
	char &loc = find(str, 'N', b); // ��ã���� loc�� s[0]�� ����.
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
	// find()�Լ��� �̰��� �����Ͽ� ���α׷��� �ϼ��غ�����.

}