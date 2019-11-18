#include<iostream>
using namespace std;
class BaseArray{
	int capacity;
	int *mem;
protected:
	BaseArray(int capacity = 10){
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray(){ delete[] mem; }
	void put(int index, int val){
		mem[index] = val;
	}
	int get(int index){ return mem[index]; }
	int getCapacity(){ return capacity; }
};
class MyQueue : public BaseArray{
	int front;
	int rear;
	int len;
public:
	MyQueue(int n){
		front = rear = n;
		len = 0;
	}
	void enqueue(int val){
		if (rear == (capacity() - 1)){
			cout << "Queue Full" << endl;
		}
		else{
			put(++rear, val);
			len++;
		}
	}
	int capacity(){
		return getCapacity();
	}
	int length(){
		return len;
		
	}
	int dequeue(){
		if (rear == front){
			cout << "Queue empty" << endl;
		}
		else{
			len--;
			return get(++front);
		}
	}
};

int main(){
	MyQueue mq(10);
	int n;
	cout << "input five integer>> ";
	for (int x = 0; x < 5; x++){
		cin >> n;
		mq.enqueue(n);
	}
	cout << "Queue capacity: " << mq.capacity();
	cout << ", Queue length: " << mq.length() << endl;
	while (mq.length() != 0){
		cout << mq.dequeue() << " ";
	}
	cout << endl << "Queue length: " << mq.length() << endl;
}