#include<iostream>
using namespace std;
int main() {
	/*int *p = new int(26);
	if (!p)
	{
		cout << "error" << endl;
		return 1;
	}
	cout << *p << endl;

	delete(p);*/
	double *pDouble;
	pDouble = new double(3.14);
	cout << "*Double: " << pDouble << endl;

}



//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int *p;
//	p = (int *)malloc(sizeof(int));
//	if (p == NULL) {
//		printf("�޸� �Ҵ� ����");
//		return 1;
//	}
//	*p = 1;//�Ҵ�� �޸𸮸� �� ���
//	free(p);
//}