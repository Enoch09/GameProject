// 복사생성자 Copy Constructor 
#include <iostream>
#include <string>
using namespace std;
class Person {
	string name; // 멤버변수
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

	// 1. 쌍둥이 객체를 생성할때

	// 2. 함수의 매개변수로 객체를 call-by-value로 넘겨주면서 호출

	// 3. 함수의 반환값으로 객체를 리턴할 때
	cout << "===================" << endl;
	original = createPerson();
	original.printInfo();
}