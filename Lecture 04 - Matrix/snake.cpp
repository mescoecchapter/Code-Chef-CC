#include <iostream>
using namespace std;

const int rows = 4;
const int cols = 4;

void printMatrix(int mat[rows][cols]){
    bool flag = false;
    for(int i = 0 ; i < rows ; i++)
    {
        if(flag == true)
        {
            for(int j = cols - 1 ; j >= 0 ; j--)
            {
                cout<<mat[i][j]<<"\t";
            }

            flag = false;
        }
        else
        {           
            for(int j = 0 ; j < cols ; j++)
            {
                cout<<mat[i][j]<<"\t";
            }

            flag = true;
        }                
    }
}

void snake(int mat[rows][cols]){

    for(int i = 0 ; i < rows; i++)
    {
        if(i % 2 == 0)  //even
        {
            for(int j = 0 ; j < cols ; j++)
            {
                cout<<mat[i][j]<<"\t";
            }
        }
        else
        {
            for(int j = cols - 1 ; j >= 0 ; j--)
            {
                cout<<mat[i][j]<<"\t";
            }
        }
    }

}

// 1 2 3 4 8 7 6 5 9 10 11 12 16 15 14 13 -- O/P 
int main()
{
    int mat [rows][cols] = {
                                {1,2,3,4},          //0
                                {5,6,7,8},          //1 
                                {9,10,11,12},       //2
                                {13,14,15,16}       //3
                           };
    
    printMatrix(mat);
    cout<<endl;
    //snake(mat);
}