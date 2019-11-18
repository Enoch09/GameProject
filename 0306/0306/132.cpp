#include<iostream>//ex132.cpp
using namespace std;
class Gate{
protected :int x, y;
public:
	void set(bool _x, bool _y){ x = _x; y = _y; }
	virtual bool operation() = 0;
};
//AndGateŬ�����ۼ�(GateŬ��������ӹ�����)
class AndGate :public Gate{
public:
	bool operation(){
		return x & y;
	}
};
//OrGateŬ�����ۼ�(GateŬ��������ӹ�����)
class OrGate :public Gate{
public:
	bool operation(){
		return x | y;
	}
};
//XorGateŬ�����ۼ�(GateŬ��������ӹ�����)
class XorGate :public Gate{
public:
	bool operation(){
		return x^y;
	}
};

int main(){
	AndGate and;
	OrGate or;
	XorGate xor;
	bool x = true, y = false;//truetrue/falsefalse/falsetrue
	//�����յ����������ε����ؾߵ˴ϴ�.
	and.set(x, y);
	or.set(x, y);
	xor.set(x, y);
	cout.setf(ios::boolalpha);//������true,false�����
	cout << and.operation() << endl;
	cout << or.operation() << endl;
	cout << xor.operation() << endl;
}