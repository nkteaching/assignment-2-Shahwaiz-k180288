//Write a program that implements the algorithm delimiterMatching()

#include <bits/stdc++.h> 
using namespace std; 
#define N 100 

class Stack{  //stack implementation
	int top; 

public: 
	char a[N]; 

	Stack(){ 
	top=-1;
	} 
	
	bool push(char x) 
    { 
	 if (top>=(N-1)) { 
		cout<<"Overflow"; 
		return false; 
	 } 
	 else { 
		a[++top]=x; 
//		cout<<x<<" pushed into stack"<<endl;  
		return true; 
	 } 
    } 

    char pop() 
    {    
	 if (top<0) { 
		cout<<"Underflow"; 
		return 0; 
	 } 
	 else { 
		char x=a[top--]; 
		return x; 
	 }  
    } 
    
    char peek() 
    {   
	 if (top<0) { 
//		cout<<endl<<"Stack is Empty"<<endl; 
		return 0; 
	 } 
	 else { 
		char x=a[top]; 
		return x; 
	 }  
    } 

    bool isEmpty() 
    { 
	 return (top<0); 
    }         
    
    void matchingDelimeter(char eq[100],Stack s1)
    {
    		int len=strlen(eq);
	
	for(int i=0;i<len;i++){
		
		if(eq[i]=='(' || eq[i]=='[' || eq[i]=='{' ){  //if opening ch are found push them
			s1.push(eq[i]);
		}
		
		else if(eq[i]==')' || eq[i]==']' || eq[i]=='}'){ //else if the latest pushed item matches the closing ch then pop

			if(s1.peek()=='(' && eq[i]==')'){
				s1.pop();
			}
			
			if(s1.peek()=='[' && eq[i]==']'){
				s1.pop();
			}
			
			if(s1.peek()=='{' && eq[i]=='}'){
				s1.pop();
			}
		}
	}
	
	if(s1.isEmpty()){  //if stack is empty than cond. is satisfied
		cout<<"Expression is balanced and contains matching grouping symbols."<<endl;
	}
	
	else if(!s1.isEmpty()){
		cout<<"Expression does not contain matching grouping symbols."<<endl;
	} 
	
	}
}; 

int main() 
{ 
	Stack s1; 
	char eq[100];
	cout<<"Enter an arithmetic expression: "<<endl;
	gets(eq);

	s1.matchingDelimeter(eq, s1); //function call
} 

