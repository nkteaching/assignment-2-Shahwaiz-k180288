//Check recursively if the following objects are palindromes:
//a. a word

#include<bits/stdc++.h>
#include<string>

using namespace std;

bool isPalin(string s, int i, int n) {
    if (i==n){
        return true; //base case
    }

    if (s[i]!=s[n-1]) {
        return false;
    }
    if (n>i){
        return isPalin(s, i+1, n-1); //recursive call //first and last index are recursively checked 
    }
    return true;
}

int main(){
	cout<<"Enter a word: "<<endl;
    string s;
    cin>>s; 
    int size=s.size();
    
    if (isPalin(s, 0, size)) //function call and checking condition
        cout<<"Is Palindrome!"<<endl;
    else
        cout<<"Not Palindrome!"<<endl;

}
