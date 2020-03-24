//a) using two additional stacks 
#include <bits/stdc++.h> 
using namespace std; 
#define N 50 

class Stack{ //stack implementation
	int top; 

public: 
	int a[N]; 

	Stack(){ 
	top=-1;
	} 
	
	bool push(int x) 
    { 
	 if (top>=(N-1)) { 
		cout<<"Overflow"; 
		return false; 
	 } 
	 else { 
		a[++top]=x; 
//		cout<<x<<" pushed into stack\n"; 
		return true; 
	 } 
    } 

    int pop() 
    {    
	 if (top<0) { 
		cout<<"Underflow"; 
		return 0; 
	 } 
	 else { 
		int x=a[top--]; 
		return x; 
	 }  
    } 
    int peek() 
    {   
	 if (top<0) { 
//		cout<<"Stack is Empty"; 
		return 0; 
	 } 
	 else { 
		int x=a[top]; 
		return x; 
	 }  
    } 

    bool isEmpty() 
    { 
	 return (top<0); 
    }       
    
 
 void reverseStack(Stack s2,Stack s3){
// 	tranfer elements from s to s2
// 	than, s2 to s3
// 	and finally back to s from s3
 while(!isEmpty()){
 	s2.push(pop());
 }
 while(!s2.isEmpty()){
 	s3.push(s2.pop());
 }
 while(!s3.isEmpty()){
 	push(s3.pop());
 }
 
}
 void display(){
 	 while (!isEmpty()) { 
        cout << " " << pop();  
    } 
 }
};

int main() 
{ 
	Stack s;
	Stack s2;
	Stack s3;
	int n , val;
	cout<<"Enter Number Elements for Stack 1:"<<endl;
	cin>>n;
//	input 
	cout<<"Enter Elements for Stack 1:"<<endl;
	for(int i=0; i<n; i++){
		cin>>val;
		s.push(val);
	}
//	using two additional stacks 
	s.reverseStack(s2,s3); 
	cout<<"After Performing Reverse: "<<endl;
	s.display();
	
}
