#include<iostream>
void swapArray(int *p, int*q, int size){
	int tmp;
	for (int x = 0; x < size; x++){
		tmp = p[x];
		p[x] = q[x];
		q[x] = tmp;
	}
}
void printArray(int *p, int size){
	for (int x = 0; x < size; x++){
		std::cout << p[x]<< " ";
	}
	std::cout << std::endl;

}
int main(){
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 9, 8, 7, 6, 5 };
	std::cout << "array a = ";
	printArray(a, 5);
	std::cout << "array b = ";
	printArray(b, 5);
	std::cout << "swapArray() running...\n"; // std::endl;
	swapArray(a, b, 5);
	std::cout << "array a = ";
	printArray(a, 5);
	std::cout << "array b = ";
	printArray(b, 5);
}