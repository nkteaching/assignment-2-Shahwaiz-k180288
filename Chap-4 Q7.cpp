#include <bits/stdc++.h> 
#include <queue> 
using namespace std; 
#define N 50 

template <class T>
class StackQ{
	queue<T> pool;
	int count; 

public: 
	int a[N]; 

	Stack(){ 
	count=0;
	}
	 
	bool isEmpty()  { 
	 return pool.isEmpty(); 
    }       
    
	void push(T data) 
    { 
      pool.enqueue(data);
      count++;
    } 

    int pop() {    
	 for(int i=0;i<count;i++){
	 	pool.enqueue(pool.dequeue());
	 }
	 count--;
	 return pool.dequeue();
    }  

    void display(){
 	 while (!isEmpty()) { 
        cout<<pop()<<" ";  
    } 
    }
 
};

int main(){
	StackQ<int> sq;
	
	
}
