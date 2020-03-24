//https://www.codechef.com/JAN18/problems/KCON/
#include <iostream>
using namespace std;

int main()
{
	int t;
	cout<<"enter number of test cases\n";
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int s;
		cout<<"\nenter the size of array\n";
        cin>>s;
		int a[s];
		cout<<"enter the array\n";
		for(int j=0;j<s;j++)
		{
			cin>>a[j];
		}
		cout<<"enter the value of K\n";
        int k;
		cin>>k;
		int l=s*k;
		int b[l];
		int w=0;
		for(int q=0;q<l;q++)
		{
			if(q<s)
			{
				b[q]=a[q];
			}
			else
			{
                b[q]=a[w];
                w++;
                if(w>=s)
                {
                	w=0;
                }
			}
		}
		for(int e=0;e<l;e++)
		{
			cout<<b[e];
		}
		int n=0;
		int m=0;
		for(int r=0;r<l;r++)
		{
			m=m+b[r];
			if(n<m)
			{
				n=m;
			}
			if(b[r]<0)
			{
				m=0;
			}
		}
		cout<<"\n";
		cout<<n;
	}
	return 0;
}