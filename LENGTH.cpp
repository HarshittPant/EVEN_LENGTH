#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int ans=0;
	int b=0;
	for(int i=0;i<n;i++)
	{
		int count=0;
		while(v[i]>0)
		{
			v[i]=v[i]/10;
		   count++;
		   ans=count;
		}
		if(ans%2==0)
		{
			b++;
		}
	}
	cout<<b<<endl;
	return 0;
}
