// ��������� Copy Constructor 
#include <iostream>
#include <string>
using namespace std;
class Person {
	string name; // �������
public:
	Person() { }
	Person(string n) {
		name = n;
		cout << "Person(string) constructor is called..." << endl;
	}
	Person(const Person& obj) {
		name = obj.name;
		cout << "Copy constructor is called..." << endl;
	}
	void printInfo() {
		cout << "-------------------" << endl;
		cout << name << endl;
		cout << "-------------------" << endl << endl;
	}
	string getName() {
		return name;
	}
	void setName(string n) {
		name = n;
	}
};
void changeName(Person obj) {
	obj.setName("Wang");
	cout << "changeName name: " << obj.getName() << endl; // 
}
Person createPerson() {
	Person obj("SuIn SSem");

	return obj;
}
int main() {
	Person original("sunrin");
	original.printInfo();

	// 1. �ֵ��� ��ü�� �����Ҷ�

	// 2. �Լ��� �Ű������� ��ü�� call-by-value�� �Ѱ��ָ鼭 ȣ��

	// 3. �Լ��� ��ȯ������ ��ü�� ������ ��
	cout << "===================" << endl;
	original = createPerson();
	original.printInfo();
}