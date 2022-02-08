//#include<iostream>
//using namespace std;
//struct node{
//	int data;
//	struct node* left;
//	struct node*right;
//	node(int val){
//		data=val;
//		left=NULL;
//		right=NULL;
//	}
//	
//};
//int search(int inorder[],int st,int en,int curr){
//	for(int i=st;i<=en;i++){
//		if(inorder[i]==curr){
//			return i;
//		}
//	}
//}
//Node*buildtree(int preorder[],int inorder[],int st,int en){
//	int static idx=0;
//	if(st>en){
//		return NULL;
//	}
//	int curr=preorder[idx];
//	idx++;
//	
//	Node* node=new Node(curr);
//	if(st==en){
//		return node;
//	}
//int pos=search(inorder,st,en,curr);
//node->left=buldtree(preorder,inorder,st,en,pos-1);
//node->right=buildtree(preorder,inorder,st,en,pos+1);
//return node;
//}
//void inroder(node*root){
//	if(root==NULL){
//		return;
//	}
//	inorder(root->left);
//	cout<<root->data<<" ";
//	inorder(root->right);
//}
//int main(){
//	preoder[]={1,3,2,4,6};
//	inorder[]={5,7,3,1,5};
//	buildtree(preorder,inorder,0,4);
//	
//}


#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

int search(int inorder[], int start, int end, int val)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}
Node *maketree(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4;
    if (start > end)
    {
        return NULL;
    }

    int val = postorder[idx];
    idx--;
    Node *curr = new Node(val);

    if (start == end)
    {
        return curr;
    }
    int pos = search(inorder, start, end, val);
    curr->right = maketree(postorder, inorder, pos+1, end);
    curr->left = maketree(postorder, inorder, start, pos-1);

    return curr;
}
void print_inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_inorder(root->left);
    cout << root->data << " ";
    print_inorder(root->right);
}
int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    Node *root = maketree(postorder, inorder, 0, 4);
    print_inorder(root);

    return 0;
}

