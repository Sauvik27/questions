//https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
	int result=1;
	int count=1;
	int size=0;
	int k=0;
	int l=1;
	cout<<"Enter size of array\n";
	cin>>size;
	float arr[size];
    cout<<"enter values in array of arrival\n";
    for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
    }
    float dep[size];
    cout<<"enter values in array of departure\n";
    for(int j=0;j<size;j++)
    {
    	cin>>dep[j];
    }
    sort(arr,arr+size);
    sort(dep,dep+size);
    while(k<size && l<size)
    {
    	if(arr[l]<=dep[k])
    	{
    		count++;
    		l++;
    		if(count>result)
    		{
    			result=count;
    		}

    	}
    	else
    	{
    		count--;
    		k++;
    	}
    }
    cout<<result;
    return 0;
}