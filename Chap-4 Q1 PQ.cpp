//Write a program that determines whether an input string is a palindrome; that is,
//whether it can be read the same way forward and backward. At each point, you can
//read only one character of the input string; do not use an array to first store this
//string and then analyze it (except, possibly, in a stack implementation). Consider
//using multiple stacks

#include <bits/stdc++.h> 
using namespace std; 
#define N 100 

class Stack{  //stack implementation

public: 
    int top; 
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

bool operator == (Stack s){   // == operator to check if a string is equal to its reverse
	int count=0;
	if(s.top==top){
	 for(int i=0;i<=s.top;i++){
		if(s.a[i]==a[i]){
			count++;
		}
	 }
	 if(count==top+1){
		return true;
	 }
	 else{
	 	return false;
	 }
    }
	else{
		return false;
	} 	
   
 }
}; 

int main() 
{ 
	Stack s1, s2,temp; 
	char word[100];
	cout<<"Enter a string: "<<endl;
	gets(word);

	int len=strlen(word);
    for(int i=0;i<len;i++){   
		s1.push(word[i]); //push string one by one into s1
	}
	//reversing a string using two additional stacks
	while(!s1.isEmpty()){
		s2.push(s1.peek());
		temp.push(s1.peek()); 
		s1.pop();
	}
	while(!temp.isEmpty()){
       	s1.push(temp.peek());
		temp.pop();
	}
	
	//checking condition using == operator
	if(s1==s2){    
		cout<<endl<<endl<<"Plaindrome!";
	} 
	else{
		cout<<endl<<endl<<"Not Palindrome!";
	}
}

