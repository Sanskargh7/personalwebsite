#include<iostream>
#define n 30
using namespace std;
class queue{
	int* arr;
	int front;
	int back;
	public:
		queue(){
			arr=new int[n];
			front=-1;
			back=-1;
		}
	void push(int x){
			if(back==n-1){
				cout<<"queue is overflow";
				return;
			}
			back++;
			arr[back]=x;
			if(front==-1){
				front++;
			}
	}
	void pop(){
		if(front==-1 ||front>back){
			cout<<"we can not delete it";
			return;
		}
		front++;
	}
	int peek(){
		if(front==-1 ||front>back){
			cout<<"no element present in queue";
			return -1;
		}
		return arr[front];
	}
	bool empty(){
		if(front==-1&&back==-1){
	
		return true;
	}
	return false;
	}
	
};
int main(){
	queue q;
	q.push(3);
	q.push(4);
	q.push(7);
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	cout<<q.empty()<<endl;
	return 0;
      }
