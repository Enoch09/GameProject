#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


class BaseSort{
	int num[100];
public:
	void Random(){
		srand(time(NULL));
		for (int x = 0; x < 100; x++)
		{
			num[x] = rand() % 500 + 1;
		}
	}
	void Print()
	{
		cout << "Before Sorting---------------" << endl;
		cout.setf(ios::right);
		for (int i = 0; i < 100; i++)
		{
			cout.width(4);
			cout << num[i];
			if (i % 10 == 9)
				cout << endl;
		}
	}
	void PrintAfter()
	{
		int temp;
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
			{
				if (num[i] < num[j])
				{
					temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}
		cout << "After Sorting-----------------" << endl;
		cout.setf(ios::right);
		for (int x = 0; x < 100; x++)
		{
			cout.width(4);
			cout << num[x];
			if (x % 10 == 9)
				cout << endl;
		}
	}
};

int main(){
	
	BaseSort bs;
	bs.Random();
	bs.Print();
	bs.PrintAfter();
	//난수발생 코드 예시
	/*srand(time(NULL));
	for (int x = 0; x < 10; x++)
	{
		cout << rand() % 3 + 1;
	}
	cout << endl;*/
}