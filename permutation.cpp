//// C++ program to display all permutations
//// of an array using STL in C++
//
//#include <bits/stdc++.h>
//using namespace std;
//
//// Function to display the array
//void display(int a[], int n)
//{
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//
//// Function to find the permutations
//void findPermutations(int a[], int n)
//{
//
//	// Sort the given array
//	sort(a, a + n);
//
//	// Find all possible permutations
//	cout << "Possible permutations are:\n";
//	do {
//		display(a, n);
//	} while (next_permutation(a, a + n));
//}
//
//// Driver code
//int main()
//{
//
//
//int a[10];
//
//	int n= sizeof(a) / sizeof(a[0]);
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//
//	findPermutations(a, n);
//
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//void display()
//void findPermutation(int arr[],int n){
//	sort(arr,arr+n);
//	while(next_permutation(arr,arr+n))
//	{
//		for(int i=0;i<n;i++){
//			cout<<arr[i];
//			
//		}
//		
//	}
//	
//}
//int main(){
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//cout<<	findPermutation(arr,n)<<endl;
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
	int a=0;
	cout<<(a++)<<endl;
	cout<<(++a)<<endl;
	cout<<(a);
	return 0;
}












