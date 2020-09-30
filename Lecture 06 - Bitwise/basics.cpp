#include <iostream>
using namespace std;

int main()
{
    int x = 5;      //1 0 1
    int y = 3;      //0 1 1

    //or
    cout<<(x|y)<<endl;      

    //      1   0   1
    //  |   0   1cd   1
    //  ---------------
    //      1   1   1   (7)    


    //and
    cout<<(x&y)<<endl;    

    //      1   0   1
    //  &   0   1   1
    //  ---------------
    //      0   0   1   (1)    
                    
    //exor
    cout<<(x^y)<<endl;

    //      1   0   1
    //  ^   0   1   1
    //  ---------------
    //      1   1   0   (6)    


    //left shift    --> multiply by power of 2
    cout<<(x<<1)<<endl;


    //right shift   --> divide by power of 2
    cout<<(x>>1)<<endl;

    return 0;
}