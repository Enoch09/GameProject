#include<iostream>
#include<string>
using namespace std;
class Book{
	char *title = NULL;
public:
	Book(char* t){
		title = new char[strlen(t) + 1];
		strcpy_s(title, strlen(t) + 1, t);
	}
	Book(const Book& obj)
	{
		title = new char[strlen(obj.title) + 1];
		strcpy_s(title, strlen(obj.title) + 1, obj.title);
	}
	~Book(){ delete[] title; }
	void set(char *t){
		if (title != NULL)
		{
			delete[] title;
		}
		title = new char[strlen(t) + 1];
		strcpy_s(title, strlen(t) + 1, t);
	}
	void show(){ cout << title << endl; }
};
int main(){
	Book sunrin("Sunrin");
	Book gamep = sunrin;
	gamep.set("Game");
	sunrin.show(); 
	gamep.show();
}