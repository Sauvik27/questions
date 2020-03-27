//https://www.geeksforgeeks.org/chocolate-distribution-problem/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
	int size=0;
	int m=0;
	cout<<"Enter the number of students\n";
	cin>>m;
	cout<<"Enter size of array\n";
	cin>>size;
	int arr[size];
    cout<<"enter values in array\n";
    for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
    }
    sort(arr,arr+size);
    int max=INT_MAX,curr=0;
    for(int k=0;k<size-m;k++)
    {
         curr=abs(arr[k]-arr[k+m-1]);
         if(max>curr)
         {
         	max=curr;
         }
    }
    cout<<"Minimum difference is "<<max<<"\n";
    return 0;
}