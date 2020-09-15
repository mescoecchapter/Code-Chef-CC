#include <iostream>
using namespace std;

void fib(int n){
    int first = 0;
    int second = 1;

    int next;    
    while(n!=0)
    {
        //cout<<first<<" ";           
        next = first + second;      
        first = second;             
        second = next;              
        n--;                        
    }    

    cout<<second - first;
}

int main(){
    int n;          // 0 1 1 2 3 5 8
    cin>>n;

    fib(n);

    return 0;
}