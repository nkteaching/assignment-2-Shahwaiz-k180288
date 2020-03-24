//Write a recursive function that calculates and returns the length of a linked list.
#include <bits/stdc++.h>
using namespace std;

class Node {  //implementation on Node and LinkedList
    public:
        int data;
        Node *next;

        Node(int node_data) {
            data=node_data;
            next=NULL;
        }
};

class LinkedList {
    public:
       Node *head;
       Node *tail;

        LinkedList() {
           head=NULL;
           tail=NULL;
        }
void Display(Node* node) {
    while (node) {
        cout<<node->data;

        node=node->next;

        if(node){
            cout<<" ";
        }
    }
}

Node* insertNodeAtHead(Node* llist, int data) //insert at head 
{	
Node* temp=new Node(data);
   temp->next=NULL;

   if(llist==NULL){
    llist=temp;
    }
   else{
    temp->next=llist;
    llist=temp;
    }
    
   return llist;
}

int calcLength(Node * head){  //function to calculate length of linked list
	if(head==NULL){ //base case
		return 0;
	}
	else{
		return 1+calcLength(head->next); //recursive call
	}
}
};


int main()
{
    LinkedList l;
    int lcount;
    cout<<"Enter N:"<<endl;
    cin >> lcount;
    cout<<"Enter Elements: "<<endl;
    //input with insertion at head
    for (int i = 0; i < lcount; i++) {
        int ele;
        cin>>ele;
        Node* llist_head= l.insertNodeAtHead(l.head, ele);
        l.head=llist_head;
    }
    cout<<endl;
    //display list
    l.Display(l.head);
    cout<<endl;
    int len=l.calcLength(l.head); //function call
    cout<<"Length of linked list using recursive function: "<<len;
}

