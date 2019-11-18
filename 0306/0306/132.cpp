#include<iostream>//ex132.cpp
using namespace std;
class Gate{
protected :int x, y;
public:
	void set(bool _x, bool _y){ x = _x; y = _y; }
	virtual bool operation() = 0;
};
//AndGate클래스작성(Gate클래스를상속받을것)
class AndGate :public Gate{
public:
	bool operation(){
		return x & y;
	}
};
//OrGate클래스작성(Gate클래스를상속받을것)
class OrGate :public Gate{
public:
	bool operation(){
		return x | y;
	}
};
//XorGate클래스작성(Gate클래스를상속받을것)
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
	//위조합도정상적으로동작해야됩니다.
	and.set(x, y);
	or.set(x, y);
	xor.set(x, y);
	cout.setf(ios::boolalpha);//블린값을true,false로출력
	cout << and.operation() << endl;
	cout << or.operation() << endl;
	cout << xor.operation() << endl;
}