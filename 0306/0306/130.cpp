// �߻� Ŭ����: ���������Լ��� 1�� �̻� ���� �ִ� Ŭ����
// --> ��ü�� ������ �� ����
// --> ����� ���Ѽ� �ڽ� Ŭ���� : ��� ���������Լ��� ������
// ���������Լ� : virtual + �Լ����� + =0;// {}�������
// virtual + �Լ�

#include<iostream>
using namespace std;
class Shape{
public:
	virtual void draw() = 0;
	void paint(){ draw(); }
};
class OSU : public Shape{
public:
	void draw(){
		cout << "Sang hun JJang" << endl;
	}
};

int main(){
	//Shape dohyung; // �߻�Ŭ���� ��üx
	
	OSU obj; // �ڽ�Ŭ����=�߻�Ŭ����
	obj.paint();
	Shape *pointer = &obj;
	pointer->paint();

}