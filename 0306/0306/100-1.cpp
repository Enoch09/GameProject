#include<iostream>
#include<string>
using namespace std;
class Person{
	int id;
	char *name;
public:
	Person(int i, char *n)
	{
		this->id = i;
		cout << "memory allocation... " << endl;
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n)+1 , n);
	}
	Person(const Person& obj){
		this->id = obj.id;
		this->name = new char[strlen(obj.name) + 1];
		strcpy_s(name, strlen(obj.name) + 1, obj.name);
	}
	~Person(){
		cout << "memory destroy..." << endl;
		delete[]name;
	}
};
int main(){
	Person obj1(20501, "sunrin");
	Person obj2(obj1);
}