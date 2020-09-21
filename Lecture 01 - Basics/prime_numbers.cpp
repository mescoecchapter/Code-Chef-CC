#include<iostream>
using namespace std;

int main()
{

int num;
int flag;

cout<<"enter number:";
cin>>num;

for(int j=2;j<=num;j++)
{
    flag = 0;
    
for(int i=2;i<=j/2;i++)
{
	if(j%i == 0)
	{
		flag=1;
		break;
	}
}

if (flag==0)
{
	
	cout<<j<<endl;
}

  
}
return 0;
}

