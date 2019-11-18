#include<iostream>
using namespace std;
class MyClass{
	int size; int *elemet;
public:
	MyClass(int s){
		size = s;
		for (int x = 0; x < size; x++)
			elemet[x] = x * 3;
	}
	MyClass(const MyClass& obj){
		size = obj.size;
		elemet = new int[size];
		for (int x = 0; x < size; x++)
			elemet[x] = obj.elemet[x];
	}

	~MyClass(){ delete[] elemet; }
	void printInfo(){
		for (int x = 0; x < size; x++)
			cout << elemet[x] << " ";
		cout << endl;
	}
};
int main(){
	MyClass origin(3);
	MyClass copy(origin);
	copy.printInfo();
}