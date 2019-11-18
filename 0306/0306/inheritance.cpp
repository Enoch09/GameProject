#include<iostream>
#include"도형.h"
using namespace std;



int main() {
	도형 obj;
	obj.setX(10);
	cout << obj.getX() << endl;
}




//class Animal{
//public:
//	int age = 1;
//
//};
//class Human : public Animal{
//public:
//	void print(){
//		age = 18;
//		cout << age << endl;
//	}
//};
//int main(){
//	Human sunrin;
//	sunrin.print();
//	/*sunrin.age = 18;
//	cout << sunrin.age << endl;*/
//}