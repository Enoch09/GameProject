#include<iostream>
using namespace std;
void addone(int& num1) {
	num1++;
}
int main() {
	int a = 10;
	addone(a);
	cout << a << endl;
}










//int& getX() {
//	int x = 1;
//	return x;
//};
//char& find(char* name, int index) {
//	return name[index];
//}
//int main() {
//	char name[10] = "sunrin";
//	char& ref = find(name, 5);
//	ref = 'R';
//	cout << name << endl;
//	cout << ref << endl;
//

	/*Circle a(10);
	Circle b(a);

	cout << b.r << endl;
	int y = getX();
	getX() = 2;
	cout << y << endl;*/



	/*Circle a;
	Circle b(5);
	Circle &c = b;
	cout<<a.r<<endl;
	cout << b.r << endl;
	cout << c.r << endl;*/
//}