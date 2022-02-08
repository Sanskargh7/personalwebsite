#include<iostream>
#include<stack>
using namespace std;
class que{
	private:
stack<int>s1;
stack<int>s2;
public:
void push(int x){
	s1.push(x);
}
int pop(){
	if(s1.empty()&&s2.empty()){
		cout<<"queue is empty";
		return -1;
	}
	if(s2.empty()){
		while(!s1.empty()){
			s2.push(s1.top());
			pop();
		
		}
	}
	int topval=s1.top();
	s2.pop();
	return topval;
}
bool empty(){
	if(s1.empty()&&s2.empty()){
		return true;
	}
	return false;
}
	
};
int main(){

que q;
q.push(3);
q.push(2);
q.push(6);
cout<<q.pop()<<endl;
q.push(8);
q.pop();
q.pop();
q.pop();
q.pop();
q.pop();
return 0;
}
