#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
//	int max=INT_MIN;
//	for(int i=1;i<=n;i++){
//		for(int j=i;j<=n;j++){
//			int sum=0;
//			for(int k=i;k<=j;k++){
//				sum+=arr[k];
//			}
//			if(max<sum){
//				max=sum;
//			}
//		}
//	}
int max=INT_MIN;
int max_till_here=0;
for(int i=0;i<n;i++){
	max_till_here=max_till_here+arr[i];
	if(max_till_here>max){
		max=max_till_here;
	}
	if(max_till_here<0){
		max_till_here=0;
	}
}
	cout<<max<<endl;
	return 0;
}
