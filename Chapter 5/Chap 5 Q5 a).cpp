//5. Write a recursive method that for a positive integer n prints odd numbers
//a. between 1 and n

#include <bits/stdc++.h> 
using namespace std; 

int printOdd(int n, int lowlimit){
	if(n<=lowlimit){ //base case
		return 0;
	}
	else{
			if(lowlimit%2!=0){  //cond. for odd numbers
			cout<<lowlimit<<" ";
		}
		return printOdd(n, lowlimit+1); //recursice call
	}
}

int main() 
{ 
 printOdd(10, 0); //function call    //lower limit is set 0 to reach the base case
} 

