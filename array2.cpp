//https://www.geeksforgeeks.org/find-subarray-with-given-sum/
#include <iostream>
using namespace std;
int main()
{
    int size=0;
    int add=0;
    int sum=0;
    int max=0;
    int min=0;
    cout<<"Enter the size of array\n";
    cin>>size;
    int arr[size];
    cout<<"enter values in array\n";
    for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
    }
    cout<<"\n";
    cout<<"Enter the SUM\n";
    cin>>sum;
    cout<<"\n";
    cout<<"\n";
    for(int j=0;j<size;j++)
    {
    	add=add+arr[j];
    	if(add>sum)
    	{
            max=j;
            for(int k=0;k<size;k++)
            {
            	add=add-arr[k];
            	if(add==sum)
            	{
                 min=k+1;
                 break;
            	}
            }
            break;
    	}
    	
    }
    cout<<"sum found between indexes "<<min<<" and "<<max;
    return 0;
}
