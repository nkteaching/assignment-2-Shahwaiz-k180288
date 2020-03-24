//For a given character recursively, without using strchr() or strrchr(),
//c. Remove all of its occurrences from a string.

#include<bits/stdc++.h>
#include<string>

using namespace std;

void remove(string &s, char c) {
    static int i, j;

    if (s[i]) {
        s[i]=s[i+j]; 
        if (s[i]==c) { //if index is found
            j++;
            i--;  //skip that index and move forward
        }
        i++;
        remove(s, c);
    }
}

int main() {
	cout<<"Enter String: "<<endl;
    string s;
    cin>>s;
    cout<<"Enter character you want to remove: "<<endl;
    char ch;
    cin>>ch;
    remove(s, ch); //function call
    cout<<"After removal of character: "<<endl;
    cout<<s;
}
