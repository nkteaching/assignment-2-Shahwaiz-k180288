//Check recursively if the following objects are palindromes:
//b. a sentence (ignoring blanks, lower- and uppercase differences, and punctuation
//marks so that “Madam, I’m Adam” is accepted as a palindrome)

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

string Modify(string str) {
    int s=str.size();
    for (int i=0; i<s; i++){
        if (str[i]==' ' ||str[i]=='\'' ||str[i]==',' ||str[i]=='.'){
		  str.erase(i, 1); // string erase is a string library function
		                  // in this case, it means that this function will delete 1 character from ith index
	    }
    }
    return str;
}

int main(){
	cout<<"Enter a Sentence: "<<endl;
    string s;
    cin>>s; 
    int size=s.size();
    Modify(s); //Modify string before sending it to fucntion 
    if (isPalin(s, 0, size)) //function call and checking condition
        cout<<"Is Palindrome!"<<endl;
    else
        cout<<"Not Palindrome!"<<endl;
}
