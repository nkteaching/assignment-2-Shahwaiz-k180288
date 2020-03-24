//5. Write a recursive method that for a positive integer n prints odd numbers
//b. between n and 1

#include <bits/stdc++.h> 
using namespace std; 

int printOdd(int n){
	if(n<=0){ //base case
		return 0;
	}
	else{
			if(n%2!=0){  //cond. for odd numbers
			cout<<n<<" ";
		}
		return printOdd(n-1); //recursice call
	}
}

int main() 
{ 
 printOdd(10); //function call
} 

