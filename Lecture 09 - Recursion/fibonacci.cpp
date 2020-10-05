#include<iostream>
using namespace std;

int fibo(int n)
{
   if(n==0 | n==1)
     return n;
   else
   {
       return fibo(n-2) + fibo(n-1);
   }
     
}

int main()
{
    int n = 6;
    int result;

    
   result = fibo(n);
        
   cout<<result<<endl;
    return 0;
}
