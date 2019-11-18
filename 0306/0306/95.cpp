#include<iostream>
#include<string>
using namespace std;
class Mammal{
	int age;
	double weight;
public:
	void setAge(int age){
		this->age = age;
	}
	void setWeight(double weight){
		this->weight = weight;
	}
	int getAge(){
		return age;
	}
	double getWeight(){
		return weight;
	}
	void speak(){
		cout << "grrrrr" << endl;
	}
};

class Cat :public Mammal{
	string name;
public:
	Cat(string name){
		this->name = name;
	}
	void print(){
		cout << "name: " << name << endl;
		cout << "age: " << getAge() << endl;
	}
	void speak(){
		cout << "Meow~" << endl;
	}
};

int main(){
	Cat sunrin("sunrin");
	sunrin.setAge(2);
	sunrin.setWeight(1.5);
	sunrin.print();
	sunrin.speak();
}