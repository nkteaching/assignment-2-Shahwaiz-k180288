//What is the output of the same function if ch is declared as
//static char ch;

#include <bits/stdc++.h> 
using namespace std;

void reverse() {
static char ch; //the value is carried through the function
cin.get(ch);
if (ch != '\n')
  reverse(); //everytime func is called a terminating character is encountered
cout.put(ch);
}


int main(){
	reverse(); //the funtion print size + 1 spaces 
}
