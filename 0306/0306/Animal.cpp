#include<iostream>
#include<string>
using namespace std;
class Animal{
public:
	void say(){
		cout << "Animal says~" << endl;
	}
};
class Cat :public Animal{
public:
	void say(){
		cout << "Meow~" << endl;
	}
};
int main(){
	Cat sunrin;
	sunrin.say();
}