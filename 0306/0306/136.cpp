//���ꤤ�� �ߺ� --> new �����ڵ� �ߺ��Ǵ���
//��ü��.�Լ�(0)--> ��ü��.������()
//��ü��.����(X)
//1+1=2
//a+1=?
//�Լ��ߺ�ó�� Ŭ������ ������ �ߺ�
//�����Ͽ�-->������ �ߺ�/�Լ�
//ù��°, C++ �����ϴ� �����ڵ鸸 �ߺ�
//			****(X)
//�ι�°, ���� �⺻Ÿ�Գ����� ������X
//����°, ��ü�� ������ �ߺ�(Ŭ����)
//�Լ��� ����: Ŭ���� �ɹ��Լ�, �ܺ��Լ�
#include<iostream>
using namespace std;
class Point{
	int x, y;
public:
	Point(int x = 0, int y = 0 ){
		this->x = x; this->y = y;
	}
	void show(){
		cout << "x:" << x << ",y:" << y << endl;
	}
	friend Point operator+(Point, Point);
	friend bool operator==(Point, Point);
};
bool operator==(Point a, Point b){
	if (a.x == b.x&&a.y == b.y){
		return true;
	}
	else
		return false;
}
Point operator+(Point a,Point b){
	Point tmp;
	tmp.x = a.x + b.x;
	tmp.x = a.y + b.y;
	return tmp;
}
int main(){
	Point a(1, 2), b(3, 4), c;
	c = a + b;
	c.show();
}