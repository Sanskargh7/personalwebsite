#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int result=arr[0];
	for(int i=0;i<n;i++){
		int multi=arr[i];
		for(int j=i+1;j<n;j++){
			
			result=max(result,multi);
			multi*=arr[j];
		}
		result=max(result,multi);
	}
	cout<<result<<endl;
	return 0;
}
