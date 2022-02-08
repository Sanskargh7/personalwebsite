#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
int mi=INT_MAX;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			if(sum>x){
				mi=min(mi,j-i+1);
			}
			
		}
	}
	cout<<mi<<endl;
	return 0;
}
