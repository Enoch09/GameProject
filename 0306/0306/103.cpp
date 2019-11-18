#include<iostream>
using namespace std;
class Date{
	int year, month, day;
public:
	Date(){ year = 2019, month = 3, day = 1; }
	Date(const Date& obj)
	{
		year = obj.year; month = obj.month; day = obj.day;
		cout << "constructor is called..." << endl;
	}
	void printInfo(){
		cout << year << "." << month << "." << day << "." << endl;
	}
	void setMonth(int n){ month = n; }
};
int main(){
	Date ori;
	ori.printInfo();
	ori.setMonth(9);
	Date copy(ori); 
	copy.printInfo();
}