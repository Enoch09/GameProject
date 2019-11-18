#include<iostream>
bool isMultiple(int a, int b){
	int sum = b%a;
	if (sum == 0){
		return true;
	}
	else
		return false;
}
int main(){
	int a, b;
	std::cout << "Input ";
	std::cin >> a;
	std::cin >> b;
	if (isMultiple(a, b) == true){
		std::cout << "Yes";
	}
	else
		std::cout << "No";
}