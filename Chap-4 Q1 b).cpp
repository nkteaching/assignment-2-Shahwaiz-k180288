//b. using one additional queue
//c. using one additional stack and some additional nonarray variables

#include <bits/stdc++.h> 
using namespace std; 
#define N 50 

//class implementation of Queue
class Queue { 
	int front, rear, capacity; 
	int* queue; 
public:
	Queue(int c) 
	{ 
		front = rear = 0; 
		capacity = c; 
		queue = new int; 
	} 
	Queue() 
	{ 
		front = rear = 0; 
		queue = new int; 
	} 
	~Queue() { delete[] queue; } 

	void queueEnqueue(int data) 
	{ 
		if (capacity == rear) { 
			printf("\nQueue is full\n"); 
			return; 
		} 
		else { 
			queue[rear] = data; 
			rear++; 
		} 
		return; 
	} 

	int queueDequeue() 
	{ 
		if (front == rear) { 
			printf("\nQueue is empty\n"); 
			return 0; 
		} 
		else { 
		    int var=queue[rear];
			for (int i = 0; i < rear - 1; i++) { 
				queue[i] = queue[i + 1]; 
			} 

			rear--; 
		    return var; 
		} 
	} 

	void queueDisplay() 
	{ 
		int i; 
		if (front == rear) { 
//			printf("\nQueue is Empty\n"); 
			return; 
		} 

		for (i = front; i < rear; i++) { 
			printf(" %d <-- ", queue[i]); 
		} 
		return; 
	} 


	void queueFront() 
	{ 
		if (front == rear) { 
//			printf("\nQueue is Empty\n"); 
			return; 
		} 
		printf("\nFront Element is: %d", queue[front]); 
		return; 
	} 
	
	bool isEmpty(){
		if (front == rear) { 
//			printf("\nQueue is Empty\n"); 
			return true; 
		} 
	    else{
	    	return false;
		} 
	}
}; 


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

 void display(){
 	 while (!isEmpty()) { 
        cout<<pop()<<" ";  
    } 
 }
 
};


 void reverseStack(Stack s, Queue q) { 
	while(!s.isEmpty()){
		q.queueEnqueue(s.pop());
	}
//	while(!q.isEmpty()){
//		s.push(q.queueDequeue());
//	}
//	cout<<endl<<"After Performing Reverse: "<<endl;
//	s.display();
q.queueDisplay();
}

int main() 
{ 
	Stack s;
	Queue q1;
	int n , val;
	cout<<"Enter Number Elements for Stack 1:"<<endl;
	cin>>n;
//	input 
	cout<<"Enter Elements for Stack 1:"<<endl;
	for(int i=0; i<n; i++){
		cin>>val;
		s.push(val);
	}
	reverseStack(s, q1); 
}
