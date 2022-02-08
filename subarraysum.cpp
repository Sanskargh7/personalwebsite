#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int flag=0;
	for(int i=0;i<n;i++){
		int s=0;
		for(int j=i;j<n;j++){
			s=s+arr[j];
			if(s==0)
			flag=1;
			break;
		}
	}
	
	if(flag==1){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	return 0;
}
