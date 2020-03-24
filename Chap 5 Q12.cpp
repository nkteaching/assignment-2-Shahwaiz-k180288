#include <bits/stdc++.h> 
using namespace std; 

int cubes(int n) {
	static int i;  //static value is carried through the function
 if(i>=n){  //base case
 	return 0;
 }
 
 else{
 	i++;
 	cout<<i*i*i<<" "; //print cube
 	return cubes(n); //recursive call
}
}

int main() 
{ 
 cubes(6); //function call
} 

