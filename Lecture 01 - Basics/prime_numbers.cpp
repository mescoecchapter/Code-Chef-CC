// enlist all prime numbers upto the given number

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"enter number:";
	cin>>num;
	
	int cnt=0;
	
	for(int i=2;i<=num;i++)
	{
	   
	cnt = 0;
	for(int j=2;j<=i/2;j++)
	{
		
		if(i%j == 0)
		{
			cnt++;
		}
	}
	
	if(cnt == 0)
	{
		cout<<i<<endl;
	}
	
}
	
}
