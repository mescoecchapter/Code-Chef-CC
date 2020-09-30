#include <iostream>
using namespace std;

bool isPowerOf2(int x)
{
    
    int y = x - 1;

    if((x & y) == 0)
        return true;
    return false;        
}

int main()
{
    int x = 3;    
    cout<<isPowerOf2(x);
    return 0;
}




















