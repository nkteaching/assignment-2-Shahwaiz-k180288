//Write a recursive method that uses only addition, subtraction, and comparison to
//multiply two numbers.

#include <bits/stdc++.h> 
using namespace std; 

int func(int num1, int num2){
	if(num2<=0){ //base case
		return 0;
	}
	else{
		//num1 will add to itself num2 times which is equivalent to num1*num2
		return num1 + func(num1, num2-1); //recursive call 
	}
}

int main() 
{ 
int num=func(2,5); //function call
cout<<num;
} 

