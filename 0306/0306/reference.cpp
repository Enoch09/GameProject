#include<iostream>
using namespace std;
void half(double &a) {
	a = a / 2;
}
int main() {
	double a = 10;
	half(a);
	cout << a << endl;
}





//int main() {
//	cout << "a" << "\t" << "b" << "\t" << "ref" << endl;
//	int a = 1, b = 2;
//	int &ref = a;
//	a = 3;
//	ref++;
//	cout << a << "\t" << b << "\t" << ref << endl;
//	ref = b;
//	ref++;
//	cout << a << "\t" << b << "\t" << ref << endl;
//
//	int *p;
//	p = &a;
//	*p = 5;
//	cout << a << "\t" << b << "\t" << ref << endl;
//}



//void add(int &a) {//참조 변수   &<-참조자
//	a = a + 1;
//}
//int main() {
//	int a = 1;
//	add(a);
//	cout << a << endl;
//}