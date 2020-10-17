// LINEAR SEARCH FOR INTEGER ARRAY

#include <iostream>
using namespace std;

/*

Global Declaration of array :-

int arr[] = {2 , 33 , 76 , 84 , 90 , 25 , 1};
int length = sizeof(arr)/sizeof(arr[0]);

*/

class Search{

            public:
                    void LinearSearch(int arr[] , int length , int key);
};

void Search :: LinearSearch(int arr[] , int length , int key)
{
   
   int flag = 0;

   for(int i=0 ; i<length ; i++)
   {
       if(arr[i] == key)
       {
           cout<<key<<" is present at "<<i<<" index position.";
           flag = flag+1;
	   break;
       }
   }

   if(flag == 0)
   {
       cout<<"Element not present !";
   }

}

int main() {
    
    int length;   
    cout<<"Enter the length of the array :- "<<endl;
    cin>>length;
    
    int arr[length];
    cout<<"Enter the elements in the array :- "<<endl;
    for(int i=0 ; i<length ; i++)
    {
    	cin>>arr[i];
	}
	
	cout<<"The array :- [";
	for(int i=0 ; i<length ; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<"]"<<endl;
	
	int key;
    cout<<"Enter the element to be searched :- "<<endl;
    cin>>key;

    Search s;
    s.LinearSearch(arr , length , key);

}

