#include<iostream> //다중상속
using namespace std;

class A{
public:
	virtual ~A(){ cout << "~A()" << endl; }
};
class B : public A{
public:
	virtual ~B(){ cout << "~B()" << endl; }
};

int main(){
	A *a=new B;
	delete a;

	//함수 재정의 & 함수 오버라이딩
	/*Cat *sunrin[4] = { new Cat, new Tiger, new Lion, new Liger };
	for (int x = 0; x < 4; x++){
		sunrin[x]->Cat::say();
		sunrin[x]->say();
		cout << "--------------" << endl;
	}*/

	//다중 상속
	/*Liger sunrin;
	if (sunrin.stripe == true && sunrin.galgi == true)
		cout << "i am Liger" << endl;
	sunrin.kawaii = true;
	if (sunrin.kawaii == true)
		cout << "i am kawaii" << endl;*/
}

//class Cat{
//public:
//	bool kawaii;
//	virtual void say(){ cout << "i am cat" << endl; }
//};
//class Tiger :virtual public Cat{
//public:
//	bool stripe;
//	 void say(){ cout << "i am tiger" << endl; }
//};
//class Lion :virtual public Cat{
//public:
//	bool galgi;
//	 void say(){ cout << "i am lion" << endl; }
//};
//class Liger :public Tiger, public Lion{
//public:
//	Liger(){ stripe = true; galgi = true;}
//
//	 void say(){ cout << "i am liger" << endl; }
//};
