#include<iostream>
using namespace std;

int main()
{
	int arr[] ={2,3,3,5,3,5,5,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k = 6;           // A value that is greater than the greatest number in the input array
	
	for(int i=0;i<n;i++)
	{
		arr[arr[i]%k]+=k;
	}
	int max=0;
	int index=0;
	
	for(int i=0;i<n;i++)
	{
	
	if(max<arr[i])
	{
		max=arr[i];
		index=i;
	}
}

	cout<<"Most occuring number is : "<<index;
	return 0;
}
