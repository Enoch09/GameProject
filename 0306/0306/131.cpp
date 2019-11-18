#include<iostream>//ex131.cpp
using namespace std;
class LoopAdder{
	int x, y, sum;//x부터y까지의합은sum
	void read(){
		cout << "Input two Integer:";
		cin >> x >> y;
	}
	void write(){
		cout << x << "~" << y << "=" << sum << endl;
	}
protected:
	int getX(){ return x; }
	int getY(){ return y; }
	virtual int calculate() = 0;//x부터y까지합을구함
public:
	void run(){
		read();//x,y값을입력받음
		sum = calculate();//합을계산
		write();//결과sum을출력
	}
};
//ForLoopAdder클래스작성(단,LoopAdder클래스를상속받을것)
class ForLoopAdder : public LoopAdder{
public:
	int calculate(){
		int x = getX();
		int y = getY();
		int sum = 0;
		for (int i = x; i <= y; i++){
			sum += i;
		}
		return sum;
	}
};
int main(){
	ForLoopAdder obj;
	obj.run();
}