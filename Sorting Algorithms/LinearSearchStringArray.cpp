// LINEAR SEARCH FOR STRING ARRAY

#include <iostream>
#include <string>
using namespace std;

/*

Global Decalaration of Array :-

string arr[6] = {"Mac" , "Robin" , "Pam" , "Bob" , "Rob",  "Peter"};
int length = sizeof(arr)/sizeof(arr[0]);

*/

class Search
{
	public :
		void LinearSearch(string arr[] , int length , string key);
};

void Search :: LinearSearch(string arr[] , int length , string key)
{
   
   int flag = 0;

   for(int i=0 ; i<length ; i++)
   {
       if(arr[i] == key)
       {
           cout<<key<<" is present at "<<i<<" index position.";
           flag = flag+1;
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
	
	string arr[length];
	cout<<"Enter the elements in the array :- "<<endl;
	for(int i=0 ; i<length ; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The array :- [  ";
	for(int i=0 ; i<length ; i++)
	{
		cout<<arr[i]<<"  ";
	}
	
	cout<<"]"<<endl;
	
	string key;
	cout<<"Enter the element to be searched :- "<<endl;
	cin>>key;
	
    Search s;
    s.LinearSearch(arr , length , key);

}

