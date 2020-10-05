#include<iostream>
using namespace std;

int grid(int n, int m)
{
    
    if(n==1 || m==1)
      return 1;
    else
    {
        return (grid(n-1,m) + grid(n,m-1));
    }
      
}

int main()
{
    int n=3,m=3;

    int result = grid(n,m);
    cout<<result<<endl;
    return 0;
}
