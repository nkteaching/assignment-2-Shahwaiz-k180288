//Write the shortest program you can that uses recursion. 

#include <bits/stdc++.h> 
using namespace std; 

void recurse()
{
    recurse(); //the definition of recursion is a function calling itself
               //keeping that in mind, this is the shortest possible code.
}
 
int main()
{
    recurse(); 
}
