
#include<iostream>
using namespace std;

void swap(int *a, int *b);
void quicksort(int a[],int l,int h);
void display(int a[],int n);
int partition(int a[],int l, int h);

void swap(int *a, int *b)
{
    int t=*a;
    *a = *b;
    *b = t;
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int partition(int a[],int l, int h)
{
    int i = l;
    int j = h;
    int pivot = a[l];

   while(i<j)
   {
        do
            {
                i++;
            } while (a[i]<=pivot);

        do
            {
                j--;
            } while (a[j]>pivot);

        if(i<j)
        {
            swap(&a[i],&a[j]);
        }
   }
   swap(&a[j],&a[l]);
   return j;

}
  
void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
       int j = partition(a,l,h);
       quicksort(a,l,j);
       quicksort(a,j+1,h);
    }

}

int main()
{

    int a[] = {4,6,8,9,12,0,3,2,100};
    int n = sizeof(a)/sizeof(a[0]);
    
    display(a,n);
    quicksort(a,0,n-1);
    display(a,n);

    return 0;
}
