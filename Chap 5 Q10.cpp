//Write a recursive function to add the first n terms of the series

#include <iostream>
using namespace std;

float Add(int n, float i, int count)
{
   
   if(i>n){     //base case
      return 0;
   }
   else{
   	   
   	   if(count%2 == 0 || count == 1){     
   	    cout<<"+ "<< 1<<"/"<<i<<" ";     //printing series
	    return  (1/i) + Add(n, i+1, count+1); //recusive call for positive member of series
	   }
	   
	   else if(count%2!=0 && count!=1){
	   	cout<<"- "<< 1<<"/"<<i<<" ";     //printing series
	   	return - (1/i) + Add(n, i+1, count+1); //recusive call for negative member of series
	   }
	}
}

int main()
{
    int n;
   cout<<"Enter Num: ";
   cin>>n;
   cout<<endl<<"Sum of Series: "<<Add(n, 1, 1); //funtion call
}

