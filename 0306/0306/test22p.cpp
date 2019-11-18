#include<iostream>
using namespace std;
int main() {
	int *ip = new int(10);
	int *p = new int[5]{ 0, };
	/*for (int x = 0; x < 5; x++)
		p[x] = x;*/
	for (int x = 0; x < 5; x++)
	cout << p[x] << endl;
	
	delete []p;
}