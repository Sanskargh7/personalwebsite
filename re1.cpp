#include<iostream>

using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	bool flag=0;
//	for(int i=2;i<n;i++){
//		if(n%i==0){
//			cout<<"this number in not prime";
//			flag=1;
//			break;
//		}
//		cout<<endl;
//	}
//	if(flag==0){
//		cout<<"it is prime";
//	}
//	return 0;
//}
//rverse number

//check armstrong number
//int main(){
//	int n;
//	cin>>n;
//	int sum=0;
//	int originaln=n;
//	while(n>0){
//	int lastdigit=n%10;
//	sum+=pow(lastdigit,3);
//	n=n/10;
//	}
//	if(sum==originaln){
//		cout<<"this is armstrong number";
//	}else{
//		cout<<"this is not armstrong";
//	}
//	return 0;
//}
//function in cpp
//print all prime n umber between two number
bool isPrime(int num){
	int n;
	for(int i=2;i<n;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(isPrime(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}











