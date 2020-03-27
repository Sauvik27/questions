//https://www.geeksforgeeks.org/equilibrium-index-of-an-array/
#include <iostream>
using namespace std;
int main()
{
	int size=0;
	int sum=0;
	int add=0;
	cout<<"Enter size of array\n";
	cin>>size;
	int arr[size];
    cout<<"enter values in array\n";
    for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
    }
    for(int j=0;j<size;j++)
    {
       sum=sum+arr[j];
       add=add+arr[size-j-1];
       if(sum==add)
       {
       	cout<<j+1<<" is an equilibrium index";
       	break;
       }
    }
    return 0;
}