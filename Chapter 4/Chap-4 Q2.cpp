//Put the elements on the stack S in ascending order using one additional stack and some additional nonarray variables. 
#include <bits/stdc++.h> 
using namespace std; 
#define N 50 

class Stack{ 
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
    
 
Stack ascendingSort() 
{ 

    Stack tmpStack;  // using one additional stack 
  
    while (!isEmpty()) 
    { 
        int var=pop();  // nonarray variable also used
        
        // while temporary stack is not empty and top of stack is greater than var 
        while (!tmpStack.isEmpty() && tmpStack.peek()<var) 
        { 
        
            push(tmpStack.pop()); // pop from temporary stack and push it to the stack    
            
        } 
        tmpStack.push(var); 
    } 
    return tmpStack; 
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
	int n , val;
	cout<<"Enter Number Elements for Stack 1:"<<endl;
	cin>>n;
//	input 
	cout<<"Enter Elements for Stack 1:"<<endl;
	for(int i=0; i<n; i++){
		cin>>val;
		s.push(val);
	}
    Stack tmpStack = s.ascendingSort(); 
    cout << "Sorted numbers are:\n"; 
    tmpStack.display();
	
}
