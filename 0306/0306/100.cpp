#include<iostream>
#include<string>
using namespace std;

class Car{
	int speed;
	string color;
public:
	Car(int speed, string color)
	{
		this->speed = speed;
		this->color = color;
		cout << "Normal Constructor"<<endl;
	}
	Car(const Car& obj)
	{
		this->speed = obj.speed;
		this->color = obj.color;
		cout << "Copy Constructor" << endl;
	}
	void print()
	{
		cout << "=================" << endl;
		cout << "speed: " << speed << endl;
		cout << "color: " << color << endl;
		cout << "=================" << endl;
	}

};
int main(){
	Car original(0, "red");
	original.print();

	Car copy(original);
	copy.print();
}