#include<iostream>
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
void sumreplacement(struct Node*root){
	if(root==NULL){
		return;
	}
	
	sumreplacement(root->left);
	sumreplacement(root->right);
	if(root->left!=NULL){
		root->data+=root->left->data;
	}
	if(root->right!=NULL){
		root->data+=root->right->data;
	}
}
void preorder(Node*root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int main(){
	Node*root=new Node(1);
	root->left=new Node(2);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right=new Node(3);
	preorder(root);
	cout<<endl;
	sumreplacement(root);
	preorder(root);
	return 0;
}
