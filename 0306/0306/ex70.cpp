#include<iostream>
#include<string>
using namespace std;
class Person {
	string name;
public:
	Person() { }
	Person(string n) { name = n; }
	string getName() { return name; }
	void setName(string name) {
		this->name = name;
	}
};
class Family {
	Person *p;
	int size;
	string FamilyName;
public:
	Family(string fname, int size);
	void show();
	void setName(int index, string name);
};
Family::Family(string fname, int size) {
	p = new Person[size];
	this->FamilyName= fname;
	this->size = size;
}
void Family::show() {
	cout << "Number of " << this->FamilyName << " is " << size<<endl;
	for (int x = 0; x < size; x++)
		cout << p[x].getName() << " ";
	cout << endl;
}
void Family::setName(int index, string name){
	p[index].setName(name);
	FamilyName = name;
}

int main() {
	Family *sunrin = new Family("sunrin", 3);
	sunrin->setName(0, "jeongtae");
	sunrin->setName(1, "sooin");
	sunrin->setName(2, "jaemin");
	sunrin->show();
	delete[] sunrin;
}