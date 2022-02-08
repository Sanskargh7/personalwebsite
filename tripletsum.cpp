//#include<iostream>
//using namespace std;
//int main(){
//	int n,x;
//	cin>>n>>x;
//	
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int ans=0;
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++)
//		{
//			for(int k=j+1;k<n;k++){
//				if(arr[i]+arr[j]+arr[k]==x)
//					ans=1;
//				
//			}
//		}
//		
//	}
//	cout<<ans;
////	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
sort(arr,arr+n);
int ans=0;

for(int i=0;i<n;i++){
	int l=i+1;
	int r=n-1;
	while(l<r){
	
	if(arr[i]+arr[l]+arr[r]==x){

	ans=1;
	break;
}
else if(arr[i]+arr[l]+arr[r]<x){
	l++;
}else{
	r--;
}

break;
	
}
}
cout<<ans;
return 0;
}













