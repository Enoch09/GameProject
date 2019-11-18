#include<iostream>
using namespace std;

class MyIntStack{
	int p[10];
	int tos;
	int size;
public:
	MyIntStack(){
		tos = -1;
		size = 10;
	}
	MyIntStack(int size){
		tos = -1;
		size = size;
	}
	MyIntStack(const MyIntStack& s){
		tos = -1;
		size = s.size;
	}
	~MyIntStack(){

	}
	bool push(int n){
		if (tos == (size - 1))
			return false;
		p[++tos] = n;
		return true;

	}
	bool pop(int &n){
		if (tos == -1)
			return false;
		n = p[tos--];
		return true;
	}
};
int main(){
	MyIntStack a(10);
	
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "a: " << n << endl;
	b.pop(n);
	cout << "b: " << n << endl;
}