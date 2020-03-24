//Transfer elements from stack S1 to stack S2 so that the elements from S2 are in the
//same order as on S1
//b. using no additional stack but only some additional nonarray variables

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
    
 
 void transElements(Stack s2, int count) { 
 int end=0;
 for(count;count>=0;count--){      //one outer loop and two inner loops
    for(int j=count;j>=0;j--){     
	    s2.push(pop());
	}
    end=pop();                    //to keep the order maintained push the peek of every iteration one by one to s2.
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
	Stack s1;
	Stack s2;
	int n , val;
	cout<<"Enter Number Elements for Stack 1:"<<endl;
	cin>>n;
//	input 
	cout<<"Enter Elements for Stack 1:"<<endl;
	for(int i=0; i<n; i++){
		cin>>val;
		s1.push(val);
	}
	
	cout<<endl<<"After Performing Function: "<<endl;
	s1.transElements(s2, n-2); 

}
