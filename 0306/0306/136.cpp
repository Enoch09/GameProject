//연산ㄴ자 중복 --> new 연산자도 중복되느냐
//객체명.함수(0)--> 객체명.연산자()
//객체명.변수(X)
//1+1=2
//a+1=?
//함수중복처럼 클래스내 연산자 중복
//정의하여-->연산자 중복/함수
//첫번째, C++ 제공하는 연산자들만 중복
//			****(X)
//두번째, 원래 기본타입끼리의 연산자X
//세번째, 객체값 연산자 중복(클래스)
//함수의 종류: 클래스 맴버함수, 외부함수
#include<iostream>
using namespace std;
class Point{
	int x, y;
public:
	Point(int x = 0, int y = 0 ){
		this->x = x; this->y = y;
	}
	void show(){
		cout << "x:" << x << ",y:" << y << endl;
	}
	friend Point operator+(Point, Point);
	friend bool operator==(Point, Point);
};
bool operator==(Point a, Point b){
	if (a.x == b.x&&a.y == b.y){
		return true;
	}
	else
		return false;
}
Point operator+(Point a,Point b){
	Point tmp;
	tmp.x = a.x + b.x;
	tmp.x = a.y + b.y;
	return tmp;
}
int main(){
	Point a(1, 2), b(3, 4), c;
	c = a + b;
	c.show();
}