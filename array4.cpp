//https://www.geeksforgeeks.org/convert-array-into-zig-zag-fashion/
#include <iostream>
using namespace std;
int main()
{
	int size=0;
	int s=0;
	cout<<"Enter size of array\n";
	cin>>size;
	int arr[size];
    cout<<"enter values in array\n";
    for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
    }
    for(int i=0;i<size-1;i++)
    {
    	if(arr[i]>arr[i+1])
    	{
    		s=arr[i];
    		arr[i]=arr[i+1];
    		arr[i+1]=s;
    	}
    	if(i+2>=size)
    	{
    		break;
    	}
    	if(arr[i+1]<arr[i+2])
    	{
    		s=arr[i+1];
    		arr[i+1]=arr[i+2];
    		arr[i+2]=s;
    	}
    	i=i+1;
    }
    for(int j=0;j<size;j++)
    {
    	cout<<arr[j];
    }
    return 0;
}