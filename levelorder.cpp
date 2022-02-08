#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node*left;
	struct Node*right;
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
//void printlevelorder(Node*root){
//	if(root==NULL){
//		return;
//	}
//	queue<Node*>q;
//	q.push(root);
//	q.push(NULL);
//	while(!q.empty()){
//		Node* node=q.front();
//		q.pop();
//		if(node!=NULL){
//		cout<<node->data<<" ";
//		if(node->left!=NULL)
//		
//			q.push(node->left);
//		
//		if(node->right!=NULL)
//			q.push(node->right);
//	}
//	else if(!q.empty())
//		q.push(NULL);
//	
//	}
//}
//int kthkevelsum(Node*root,int k){
//	if(root==NULL){
//		return -1;
//	}
//	queue<Node*>q;
//	q.push(root);
//	q.push(NULL);
//	int level=0;
//	int sum=0;
//	while(!q.empty()){
//		Node* node=q.front();
//		q.pop();
//		if(node!=NULL){
//			if(level==k){
//				sum+=node->data;
//			}
//			if(node->left)
//			q.push(node->left);
//			if(node->right)
//			q.push(node->right);
//			
//		}
//		else if(!q.empty()){
//			q.push(NULL);
//			level++;
//		}
//	}
//	return sum;
//}
//int countNode(Node*root){
//	if(root==NULL){
//		return 0;
//	}
//	return countNode(root->left)+countNode(root->right)+1;
//}
int nodeSum(Node*root){
	if(root==NULL){
		return 0;
	}
	return nodeSum(root->left)+nodeSum(root->right)+root->data;
}
int main(){
	Node*root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(10);
	root->left->right=new Node(12);
//cout<<kthkevelsum(root,2);
//cout<<countNode(root);
cout<<nodeSum(root);
	return 0;
}
