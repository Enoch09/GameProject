#include<iostream>
using namespace std;
class A {
	int a = 1;
public:
	void ShowA(){ cout << a << endl; }	
};
class B : protected A{
public:
	void ShowB(){ ShowA(); }
};
int main(){
	B b;
	b.ShowB();
}