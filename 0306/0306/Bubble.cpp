#include<iostream>
using namespace std;
class Bubble{
	int n=5;
	static int num[5];
public:
	void sort(){
		int temp;
		for (int i = n-1; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (num[j]>num[j + 1])
				{
					temp = num[j];
					num[j] = num[j + 1];
					num[j + 1] = temp;
				}
			}
		}
	}
	void original(){
		cout << "print original" << endl;
		for (int x = 0; x < n; x++)
		{
			cout << num[x] << " ";
		}
		cout << endl;
		
	}
	void print()
	{
		cout << "print bubble sort" << endl;
		for (int x = 0; x < n; x++)
		{
			cout << num[x]<<" ";
		}
		cout << endl;
	}
};
int Bubble::num[5] = { 5, 9, 1, 12, 3 };

int main(){
	Bubble b;
	b.original();
	b.sort();
	b.print();
}