// Time Complexity : O(nlog(n))
#include<bits/stdc++.h>
using namespace std;
int lis(int ara[],int n)
{
	vector<int>v;
	v.push_back(ara[0]);
	for(int i=1;i<n;i++)
	{
		if(ara[i] > v.back())
		{
			v.push_back(ara[i]);
		}
		else
		{
			int ind = lower_bound(v.begin(),v.end(),ara[i])-v.begin();
			v[ind] = ara[i];
		}
	}
	return v.size();
}
int main()
{
	int ara[] = {2,5,3,7,11,8,10,13,6};
	int n = 9;
	cout<<lis(ara,n)<<endl;
}

// Output is '6'
