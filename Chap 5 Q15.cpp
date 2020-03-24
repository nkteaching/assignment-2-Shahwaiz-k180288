//15. Execute by hand the functions tail() and nonTail() for the parameter values of
//0, 2, and 4. Definitions of these functions are given in Section 5.4.

#include <bits/stdc++.h> 
using namespace std; 
 
 
 void tail(int i) {
  if (i > 0) {
   cout << i << " "; 
   tail(i-1);  //recursive call
  }
}
 void nonTail(int i) {
  if (i > 0) {
   nonTail(i-1);
   cout << i << " "; 
   nonTail(i-1);  //2 recursive calls in the function, a case of tree recursion we can say.
 }
}
	 
int main(){
	cout<<"nonTail(4)"<<endl;
	nonTail(4);
	cout<<endl;
	cout<<"Tail(4)"<<endl;
	tail(4);
}	 
