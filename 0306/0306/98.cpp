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
	//���������� �������� cout.setf(ios::left); �������� ��������
	//��-> �����Լ��� �̿��� ���
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