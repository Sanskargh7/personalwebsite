/*#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;
	node(int val){
		data=val;
		next=NULL;
	}
};
class queue{
node* front;
node* back;
public:
	void push(int x){
		node* n=new node(x);
		if(front==NULL){
			front=n;
			back=n;
			return;
		}
	
		back->next=n;
		back=n;
	}
	void pop(){
		if(front==NULL){
			cout<<"queue is underflow";
			return;
		}
		node* todelete=front;
		front=front->next;
		delete todelete;
	}
	int peek(){
		if(front==NULL){
			cout<<"wueueu me kuchh h hi nhi";
			return -1;
		}
		return front->data;
	}
	bool empty(){
		if(front==NULL||back==NULL){
			return true;
		}
		return false;
	}
	
};
// C++ Program to find the maximum for
// each and every contiguous subarray of size k.
#include <bits/stdc++.h>
using namespace std;

// Method to find the maximum for each
// and every contiguous subarray of size k.
void printKMax(int arr[], int n, int k)
{
	int j, max;

	for (int i = 0; i <= n - k; i++)
	{
		max = arr[i];

		for (j = 1; j < k; j++)
		{
			if (arr[i + j] > max)
				max = arr[i + j];
		}
		cout << max << " ";
	}
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	printKMax(arr, n, k);
	return 0;
}



int main(){
	queue q;
	q.push(3);
	q.push(5);
	q.push(7);
	cout<<q.peek()<<endl;
	return 0;
}*/
#include<iostream>
using namespace std;
void findkmax(int arr[],int n,int k){
	int j, max;
	for(int i=0;i<n-k;i++){
		max=arr[i];
		for (j = 1; j < k; j++)
		{
			if (arr[i + j] > max)
				max = arr[i + j];
		}
		cout << max << " ";
	}
}
int main(){
	int arr[]={1,3,-1,-3,5,3,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	findkmax(arr,n,k);
	return 0;
}















