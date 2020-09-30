#include <iostream>
using namespace std;

bool isBitSet(int x,int k)
{
    int y = 1<<(k-1);

    if((x & y) != 0)
        return true;
    else
        return false;
    
}

int main()
{
    int x = 5;
    int k = 2;
    cout<<isBitSet(x,k);
    return 0;
}


























