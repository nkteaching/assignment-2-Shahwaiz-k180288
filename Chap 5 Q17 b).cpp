//For a given character recursively, without using strchr() or strrchr(),
//b. Count all of its occurrences in a string.

#include<bits/stdc++.h>
#include<string>

using namespace std;

int count(string str, char c, int n, int tcount) {
	static int i;
    if (i<n) {
        if (str[i] == c){
            i++;
            return count(str, c, n, tcount + 1); //if char is found increment count amd index
        }
        else{
            i++;
            return count(str, c, n, tcount); //else only increment index
        }
    }
    return tcount;
}

int main() {
	cout<<"Enter String: "<<endl;
    string s;
    cin>>s;
    cout<<"Enter character you want to count: "<<endl;
    char ch;
    cin>>ch;
    int c=count(s, ch, s.length(), 0); //function call
    cout<<"Count: "<<c<<endl;
}
