//For a given character recursively, without using strchr() or strrchr(),
//a. Check if it is in a string.

#include<bits/stdc++.h>
#include<string>

using namespace std;

bool check(string str, char c, int n) {
	static int i; 
    if (i<n) {
        if (str[i]==c) //check if char is found in string
            return true;
        else
            i++;
            return check(str, c, n); //increment index
    } 
	else {
        return false;   //if not found
    }
}

int main() {
	cout<<"Enter String: "<<endl;
    string s;
    cin>>s;
    cout<<"Enter character you want to check: "<<endl;
    char ch;
    cin>>ch;
      if (check(s, ch, s.length()) ) //function call and checking condition
        cout<<"Yes! Character is present the string."<<endl;
    else
        cout<<"No! Character is not present the string."<<endl;
}
