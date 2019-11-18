#include<iostream>
using namespace std;

class Circle { // 구조체 = 다른 변수들의 모임 = 함수
private:
	int radius; //속성 = 변수 =>반지름
	double area; //속성 변수 => 면적
public:
	Circle();//디폴트 생성자
	Circle(int r);
	//이름이 같고 매개변수의 타입 또는 순서 또는 개수가 다름


	/*생성자의 특징
	생성자 오버로딩(중복) :여러개 만들어집니다.
	반환형x
	일반적인 함수에서 생성자를 호출 할 수 없다
	클래스 이름과 같다.*/
	void setRadius(int r);
	double getRadius(); 
	double getArea(); // 행위 함수 //getter 값 반환

	void setArea();// setter 값 설정
};

int main() {
	//JAVA 코드 Circle won = new Circle();
	//클래스 이름 객체변수
	Circle won(5); // won 이라는 객체 생성
	//won.setRadius(10); //won 구조체 변수 내 radius 10초기화
	won.setRadius(10); // 함수호출 // 메세지 피싱
	won.setArea();
	cout << "radius: " << won.getRadius() << endl;
	cout << "area: " << won.getArea();

}
Circle::Circle() { cout << "defort" << endl; }
Circle::Circle(int r){radius = r; } 

void Circle::setRadius(int r) {radius = r;}
double Circle::getRadius() { return radius; }
double Circle::getArea() { return area; }
void Circle::setArea() { area = radius * radius*3.14; }