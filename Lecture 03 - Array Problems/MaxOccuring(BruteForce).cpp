#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,3,2,1,1,4,2,1,5};
	int n= sizeof(arr)/sizeof(arr[0]);
	int max=INT_MIN;
	int index_max=0;
		
	for(int i=0;i<n;i++)  // i<=n-1
	{
		int counter=0;
		for(int j=0;j<n;j++
		{
			if(arr[i]==arr[j])
			{
				counter++;
				}	
		}
		
		if(max < counter)
		{
			max=counter;
			index_max=i;
		}
	}

cout<<arr[index_max];
}




