//Write a recursive method that for a positive integer returns a string with commas
//in the appropriate places, for example, putCommas(1234567) returns the string
//“1,234,567.”

#include <bits/stdc++.h> 
using namespace std;

void putCommas(int num) {
    if (num<1000) { //base case
        cout<<num;
    }
    else {
        putCommas(num/1000);  //recursive call
        cout<<",";
        if (num%1000<100){  //we are using the factor od 1000 beacuse we need to insert comma every 4th place
        	cout<<"0";
		} 
        if (num %1000<10){
        	cout<<"0";
		} 
        cout<<num%1000;
    }
}

int main(){
	putCommas(78654321); //fuction call
}
