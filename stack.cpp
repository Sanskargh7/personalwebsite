#include<iostream>
using namespace std;
#define n 100
class stack
{
	private:
		int*arr;
		int top;
		public:
		stack(){
		arr=new int[n];
		top=-1;	
		}
		void push(int x){
			
			if(top==n-1){
				cout<<"stack is overflow";
				return;
			}
			top++;
			arr[top]=x;
		}
		void pop(){
			if(top==-1){
				cout<<"stack is underflow";
				return;
			}
			top--;
		}
		int Top(){
			if(top==-1){
				cout<<"sabse upper koi element nhi h";
				return -1;
			}
			return arr[top];
		}
		bool empty(){
			return top=-1;
		}	
};
int main(){
	stack st;
	st.push(3);
	st.push(4);
//	cout<<st.Top()<<endl;
	st.pop();
	cout<<st.Top()<<endl;
cout<<st.empty()<<endl;
	}
