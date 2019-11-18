#include<iostream>
using namespace std;
class Sample{
	static int a;
	int b;
public:
	void c(){ a = 1; }
	void b(){ b = 2; }
	static void e(){ a = 3; }
	static void f(){ b = 4; }
};
int Sample::a = 0;







//class Car{
//public:
//	static int cnt;
//	Car(){
//		cnt++;
//	}
//};
//int Car::cnt = 0;
//int main(){
//	Car obj1, obj2, obj3;
//	cout << "num: "<<obj1.cnt << endl;
//}