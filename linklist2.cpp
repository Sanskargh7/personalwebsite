#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=NULL;
		}
};
void insertAttail(node* &head,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void insertAthead(node* &head,int val){
	node*n=new node(val);
	n->next=head;
	head=n;
	
}
bool search(node*head,int key){
	node*temp=head;
        while(temp!=NULL){
        	if(temp->data==key){
        		return true;
		}
	temp=temp->next;
	}
	return false;
}
void deletetion(node* &head,int val){
	node*temp=head;
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node*todelete=temp->next;
	temp->next=temp->next->next;
	delete todelete;
}
int length(node*head){
	int l=0;
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		l++;
	}
	return l;
}
	
	
	
	
	

void Display(node* head){
	node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
int main(){
	node*head=NULL;
	insertAttail(head,1);
	insertAttail(head,4);
	insertAttail(head,32);
	Display(head);
	//insertAthead(head,4);
//	Display(head);
	cout<<search(head,32)<<endl;
	deletetion(head,4);
	Display(head);
	length(head);
	Display(head);
	
	return 0;

}
