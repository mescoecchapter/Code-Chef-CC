#include<iostream>
using namespace std;


//n=5;   5 4 3 2 1 = 15                        5 +(add(4))
//result = 15;                                 5 + 4 + (add(3))
                                            //5 + 4 + 3 + (add(2));
                                            //5 + 4 + 3 + 2 + (add(1));
                                            //5 + 4 + 3 + 2 + 1 = 15
int add(int n)
{
    if(n==1)
      return 1;
    else
    {
        return (n+add(n-1));
    }
      
   
}

int main()
{
    int n=5;
    int result = add(n);
    cout<<result<<endl;
    return 0;
}
