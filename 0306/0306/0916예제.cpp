#include<iostream>
using namespace std;
class Monster{
public:
	void tackle(){ cout << "Tackle!!" << endl; }
};
class Slime{
	Monster *Slimemonster;
public:
	Slime(){ Slimemonster = new Monster; }
	~Slime(){ delete Slimemonster; }
	void isMonster(){ Slimemonster->tackle(); }
};
int main(){
	Slime slime;
	slime.isMonster();
}


//class Student{
//public:
//	void study(){ cout << "study Math..." << endl; }
//};
//class Sunrin{
//	Student sunrinStudent;
//public:
//	void studyMath(){ sunrinStudent.study(); }
//};
//int main(){
//	Sunrin sunrin;
//	sunrin.studyMath();
//}