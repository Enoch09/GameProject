#include<iostream>
#include<string>
using namespace std;
class Car{
	string name;
public:
	//Car(){ cout << "Car()" << endl; }
	string getName(){ return name; }
	void setName(string r){ name = r; }
	void printCarInfo(){}

};
class SuperCar :public Car{
	string mode;
public:
	void setMode(string r){ mode = r; }
	void printSuperCarInfo(){
		cout << "SuperCar name: " << getName() << endl;
		cout << "SuperCar mode: " << mode << endl;
	}
};
int main(){
	SuperCar sunrin;
	sunrin.setName("sunrin");
	sunrin.setMode("supermode");
	sunrin.printCarInfo();

	Car *pc = (Car *)sunrin;//�ڵ� ����ȯ
	pc->printCarInfo();

	SuperCar *psc = (SuperCar *)pc;//���� ����ȯ
	psc->printCarInfo();
}