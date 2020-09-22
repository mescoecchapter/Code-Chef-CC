#include<iostream>
using namespace std;

    
int main()
{
	int arr[]={1,2,1,3,1,4,1};    
	int n= sizeof(arr)/sizeof(arr[0]);  // number of elements present in the array
	int occur[n]={0};                   // Initializing all the elements of the array by 0
	int index=0;
	
		
	for(int i=0;i<n;i++)   				//can also use i<=n-1
	{
		
		occur[arr[i]]++; 	            //occur[arr[0]]=> occur[1] => 0+1=1
		
	}

	int max = 0;  // max=0
	
	for(int j=0;j<n;j++)
	{
		
		if(max < occur[j])
		{
		max=occur[j];
		index=j;
		}
	}
	

cout<<"Most occuring number is :"<<index;

	return 0;
}


