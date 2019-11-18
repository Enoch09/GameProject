// 추상 클래스: 순수가상함수를 1개 이상 갖고 있는 클래스
// --> 객체를 생성할 수 없음
// --> 상속을 시켜서 자식 클래스 : 모든 순수가상함수를 재정의
// 순수가상함수 : virtual + 함수원형 + =0;// {}몸통없음
// virtual + 함수

#include<iostream>
using namespace std;
class Shape{
public:
	virtual void draw() = 0;
	void paint(){ draw(); }
};
class OSU : public Shape{
public:
	void draw(){
		cout << "Sang hun JJang" << endl;
	}
};

int main(){
	//Shape dohyung; // 추상클래스 객체x
	
	OSU obj; // 자식클래스=추상클래스
	obj.paint();
	Shape *pointer = &obj;
	pointer->paint();

}