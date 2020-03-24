//c. using one additional stack and some additional nonarray variables

#include <bits/stdc++.h> 
using namespace std; 
#define N 50 

class Stack{   //stack class implementation
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
    
 
 void reverseStack(Stack s2, int count) { 
 int end=0;
 for(count;count>=0;count--){
 		end=pop();
    for(int j=count;j>=0;j--){
	    s2.push(pop());
	}
	for(int j=count;j>=0;j--){
	    push(s2.pop());
	}
	s2.push(end);
  }
  cout<<endl<<pop()<<" ";
s2.display();	
}

 void display(){
 	 while (!isEmpty()) { 
        cout<<pop()<<" ";  
    } 
 }
 
};

int main() 
{ 
	Stack s;
	Stack s2;
	int n , val;
	cout<<"Enter Number Elements for Stack 1:"<<endl;
	cin>>n;
//	input 
	cout<<"Enter Elements for Stack 1:"<<endl;
	for(int i=0; i<n; i++){
		cin>>val;
		s.push(val);
	}
	
	cout<<endl<<"After Performing Reverse: "<<endl;
	s.reverseStack(s2, n-2); 

}
