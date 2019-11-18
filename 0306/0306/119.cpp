#include<iostream>
using namespace std;
//class Animal{
//public:
//	void say(){ cout << "animal say..." << endl; }
//};
//class Cat : public Animal{
//public:
//	void say(){ cout << "meow..." << endl; }
//};
//int main(){
//	Cat sunrin;
//	sunrin.say();
//}

//-----------------------------------------------------------//
//class Stick {
//public: 
//	void swing() { cout << "Swing a Stick!" << endl; }
//};
//class Police {
//	Stick policeStick; 
//public: 
//	void UseWeapon() { policeStick.swing(); }
//};
//int main() {
//	Police policeOfficer; policeOfficer.UseWeapon();
//}

//---------------------------------------------------------//
class Stick {
public: void swing() { cout << "Swing a Stick!" << endl; }
};
class Police {
	Stick *policeStick; public: Police() { policeStick = new Stick; }
	~Police() { delete policeStick; }
	void UseWeapon() { policeStick->swing(); }
};
int main() {
	Police policeOfficer; policeOfficer.UseWeapon();
}