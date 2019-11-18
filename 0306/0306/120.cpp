#include<iostream> // ex120.cpp
using namespace std;
class Adder {
protected:
	int add(int x, int y) { return x + y; }
};
class Subtractor {
protected:
	int sub(int x, int y) { return x - y; }
};
// Calculator 클래스 작성하기
class Calculator:public Subtractor,public Adder{
public:
	int cal(char c,int x,int y){
		if (c == '+'){
			return add(x,y);
		}
		else if (c == '-') {
			return sub(x, y);
		}
	};
};
int main() {
	Calculator sunrin;
	int x, y;
	cout << "Input one integer: "; cin >> x;
	cout << "Input one integer: "; cin >> y;
	cout << x << "+" << y << "=" << sunrin.cal('+', x, y) << endl;
	cout << x << "-" << y << "=" << sunrin.cal('-', x, y) << endl;
}
