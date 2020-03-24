//Write a program that implements the algorithm addingLargeNumbers()

#include <bits/stdc++.h> 
using namespace std; 
#define N 100 

class Stack{  //stack implementation

public: 
    int top; 
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
//		cout<<x<<" pushed into stack"<<endl;  
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
//		cout<<endl<<"Stack is Empty"<<endl; 
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

    void display(){
 	 while (!isEmpty()) { 
        cout<<pop();  
    } 
    }
    
    void addingLargeNumbers(string num1, string num2)
	{
    	Stack s1,s2,s3;
    	for(int i=0;i<num1.size();i++)
        {
    	int ele=(int) num1[i]-48; //using ascii value to convert char into int
    	s1.push(ele);
	    }
	
	    for(int i=0;i<num2.size();i++)
        {
    	int ele=(int) num2[i]-48; //using ascii value to convert char into int
    	s2.push(ele);
	    }
	
	 int carry=0, var1, var2, res;    
	 while(!s1.isEmpty() || !s2.isEmpty()){
	 	if(!s1.isEmpty()){
	 		var1=s1.pop();
		 }
		 else{
		 	var1=0;
		 }
		 if(!s2.isEmpty()){
	 		var2=s2.pop();
		 }
		 else{
		 	var2=0;
		 }
	 	res= var1 + var2 + carry;  //pop a number from each nonempty stack and add them to carry
	 	s3.push(res%10);
	 	res=res/10;
	 	carry=res%10;
	 }
	 
	 cout<<"Result: ";
	 s3.display();
	}
}; 

int main() 
{ 
    Stack s;
	string num1, num2;
	cout<<"Enter Number 1: "<<endl;
	cin>>num1;
	cout<<"Enter Number 2: "<<endl;
	cin>>num2;
	s.addingLargeNumbers(num1, num2); //function call
} 

