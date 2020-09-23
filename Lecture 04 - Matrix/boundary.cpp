#include <iostream>
using namespace std;

const int rows = 4;
const int cols = 4;

void printMatrix(int mat[][cols]){
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}

/*

  1  2  3  4
  5        8
  9        12
  13 14 15 16

     if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1) 
     else
        cout<<" ";

*/

void print(int mat[rows][cols]){

    for(int i = 0 ; i < rows; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1) 
            {
                cout<<mat[i][j]<<"\t";
            }else
            {
                cout<<"\t";
            }
            
        }
        cout<<endl;
    }
}

int main()
{
    int mat [rows][cols] = {
                                {1,2,3,4},  //0
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}
                           };
    
    //printMatrix(mat);
    print(mat);
}