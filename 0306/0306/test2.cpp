#include<iostream>
using namespace std;

class Circle { // ����ü = �ٸ� �������� ���� = �Լ�
private:
	int radius; //�Ӽ� = ���� =>������
	double area; //�Ӽ� ���� => ����
public:
	Circle();//����Ʈ ������
	Circle(int r);
	//�̸��� ���� �Ű������� Ÿ�� �Ǵ� ���� �Ǵ� ������ �ٸ�


	/*�������� Ư¡
	������ �����ε�(�ߺ�) :������ ��������ϴ�.
	��ȯ��x
	�Ϲ����� �Լ����� �����ڸ� ȣ�� �� �� ����
	Ŭ���� �̸��� ����.*/
	void setRadius(int r);
	double getRadius(); 
	double getArea(); // ���� �Լ� //getter �� ��ȯ

	void setArea();// setter �� ����
};

int main() {
	//JAVA �ڵ� Circle won = new Circle();
	//Ŭ���� �̸� ��ü����
	Circle won(5); // won �̶�� ��ü ����
	//won.setRadius(10); //won ����ü ���� �� radius 10�ʱ�ȭ
	won.setRadius(10); // �Լ�ȣ�� // �޼��� �ǽ�
	won.setArea();
	cout << "radius: " << won.getRadius() << endl;
	cout << "area: " << won.getArea();

}
Circle::Circle() { cout << "defort" << endl; }
Circle::Circle(int r){radius = r; } 

void Circle::setRadius(int r) {radius = r;}
double Circle::getRadius() { return radius; }
double Circle::getArea() { return area; }
void Circle::setArea() { area = radius * radius*3.14; }