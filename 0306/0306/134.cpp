#include<iostream>
#include<string>
using namespace std;
class Rect{
	friend bool equals(Rect, Rect);
	int width, height;
public:
	Rect(int w, int h) :width(w), height(h){};
};
bool equals(Rect a, Rect b){
	return a.width == b.width&&
			a.height == b.height;
}

int main(){
	Rect a(3, 4), b(4, 5), c(3, 4);
	if (equals(a, b))cout << "equal" << endl;
	else cout << "not equal" << endl;
	if (equals(b, c))cout << "equal" << endl;
	else cout << "not equal" << endl;
	if (equals(a, c))cout << "equal" << endl;
	else cout << "not equal" << endl;
}








//class Date{
//	friend bool equal(Date, Date);
//private:
//	int year, month, day;
//public:
//	Date(int y, int m, int d){ year = y; month = m; day = d; }
//
//};
//bool equal(Date a, Date b)
//{
//	return a.year == b.year&&
//		a.month == b.month&&
//		a.day == b.day;
//
//}
//int main(){
//	Date a(2002, 6, 30);
//	Date b(2002, 3, 30);
//	cout << equal(a, b) << endl;
//}
//


//class Sunrin{
//	//friend void print(Sunrin& obj);
//	friend class A;
//private:
//	string name = "Sunrin";
//public:
//	Sunrin(string n){ name = n; }
//
//};
//
//class A{
//public:
//	void print(Sunrin& obj)
//	{
//		cout << obj.name << endl;
//	}
//	void change(Sunrin& obj)
//	{
//		obj.name = "Car";
//	}
//};
//
//
//int main(){
//	Sunrin obj("software");
//	A a;
//	a.change(obj); 
//	a.print(obj);
//}