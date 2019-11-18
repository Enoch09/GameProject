#include<iostream>
using namespace std;
class House {
	int numOfRooms, size;
public:
	House(int n, int s);
	~House();
};
void f() {
	House(2, 20);
}
House::House(int n, int s) {
	numOfRooms = n, size = s;
	cout << "numOfRooms: " << numOfRooms << endl;
	cout << "size: " << size << endl;
}
House::~House() {
	cout << "Destruct size:" << size << "numOfRooms"<<numOfRooms << endl;
}
House b(3, 30), c(4, 40);
int main() {
	f();
	House d(5, 50);
}