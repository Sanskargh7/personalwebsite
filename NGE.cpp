/*#include<iostream>
using namespace std;
void nextGE(int arr[],int n){
	int next,i,j;
       for(int i=0;i<n;i++){
	next=-1;
	for(int j=i+1;j<n;j++){
		if(arr[i]<arr[j]){
			next=arr[j];
			break;
		}
	}
	cout<<arr[i]<<"--"<<next<<endl;
}
}
int main(){
	int n;
	cin>>n;
	int arr[20];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	nextGE(arr,n);
	return 0;
}*/
//we use optimized code for next greater element
#include<bits/stdc++.h>
using namespace std;
void nextGE(int arr[],int n){
	stack<int>st;
	st.push(arr[0]);
	for(int i=1;i<n;i++){
		if(st.empty()){
			st.push(arr[i]);
			continue;
		}
		while(st.empty()==false&&st.top()<arr[i]){
			cout<<st.top()<<"->"<<arr[i];
			st.pop();
		}
		st.push(arr[i]);
		
	}
	while(st.empty()==false){
		cout<<st.top()<<"->"<<-1<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[30];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	nextGE(arr,n);
	return 0;
}
