#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n = 97;

	//---------------------------
	for (int x = 1; x <= 10; x++)
	{
		cout << x << " ";
	}
	cout << endl;
	//---------------------------
	//오른쪽으로 맞춤정렬 cout.setf(ios::left); 왼쪽으로 맞춤정렬
	//ㄴ-> 포멧함수를 이용한 출력
	cout.setf(ios::right);
	/*for (int x = 1; x <= 10; x++)
	{
		cout.width(4);
		cout<< n++;
	}*/
	for (int x = 1; x < 10; x++)
	{
		cout << setw(4) << n++;
	}

	cout << endl;
}