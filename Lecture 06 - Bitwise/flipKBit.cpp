#include <iostream>
using namespace std;

int flipBit(int x,int k)
{
    int y = 1<<(k-1);

    int res = x ^ y;

    return res;    
}



int main()
{
    int x = 5;
    int k = 2;
    cout<<flipBit(x,k);
    return 0;
}

























