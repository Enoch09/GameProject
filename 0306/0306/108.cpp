#include<iostream>
using namespace std;

class MyIntStack{
	int p[10];
	int tos;
public:
	MyIntStack(){
		tos = -1;
	}
	bool push(int n){
		if (tos ==(10-1))
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
	MyIntStack a;
	for (int x = 0; x < 11; x++){
		if (a.push(x)) cout << x << " ";
		else cout << endl << "stack full" << endl;
	}
	int n;
	for (int x = 0; x < 11; x++){
		if (a.pop(n)) cout << n << " ";
		else cout << endl << "stack empty" << endl;
	}
	cout << endl;
}