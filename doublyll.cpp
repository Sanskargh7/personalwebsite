#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node*next;
		node*pre;
		node(int val){
			data=val;
			next=NULL;
			pre=NULL;
		}
};
void insertAthead(node*&head,int val){
	node*n=new node(val);
	n->next=head;
	head->pre=n;
	head=n;
}
int insertAttail(node*&head,int val){
	if(head==NULL){
		insertAttail(head,val);
		return 0;
	}
	node*n=new node(val);
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->pre=temp;
}
void Display(node*head){
	node*temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	node* &head=NULL;
		insertAttail(&head,1);
		insertAttail(&head,2);
		insertAttail(&head,3);
		Display(head);
		//insertAthead(head,5);
	//	Display(head);
		return 0;
}








