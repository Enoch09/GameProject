#include<iostream>//ex131.cpp
using namespace std;
class LoopAdder{
	int x, y, sum;//x����y����������sum
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
	virtual int calculate() = 0;//x����y������������
public:
	void run(){
		read();//x,y�����Է¹���
		sum = calculate();//�������
		write();//���sum�����
	}
};
//ForLoopAdderŬ�����ۼ�(��,LoopAdderŬ��������ӹ�����)
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