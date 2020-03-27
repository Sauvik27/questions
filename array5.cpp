//https://www.geeksforgeeks.org/find-a-pair-with-the-given-difference/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int size=0;
	int n=0;
	cout<<"Enter the difference\n";
	cin>>n;
	cout<<"Enter size of array\n";
	cin>>size;
	int arr[size];
    cout<<"enter values in array\n";
    for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
    }
    sort(arr,arr+size);
    for(int j=0;j<size;j++)
    {
    	for(int k=1;k<size;k++)
    		{
    			if(arr[k]-arr[j]==n)
    			{
    				cout<<"pair is "<<arr[j]<<","<<arr[k]<<"\n";
    			}
    		}
        
    }
    return 0;
}