#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int n)
{
	int freq[100001];
	for(int i=0;i<n;i++)
	{
		if(freq[arr[i]]==1)
		return arr[i];
		freq[arr[i]]=1;
	}
	return -1;
}

int main(){
		#ifndef INPUT_OUTPUT
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
		#endif

		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];

		cout<<duplicate(arr,n);

return 0;
}