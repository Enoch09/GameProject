#include<iostream>
#include<stdlib.h>
#include"locale.h"
int main(){
	int a, sum;
	std::cout << "first integer ";
	std::cin >> a;
	sum =	(80<=a<90);

	std::cout << "sum: " << sum << std::endl;
}