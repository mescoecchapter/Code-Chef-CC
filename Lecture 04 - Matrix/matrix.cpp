#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 3;

void printMatrix(int matrix[rows][cols]){
    
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            cout<<matrix[i][j]<<"\t";    
        }
        cout<<endl;
    }

}

int main()
{    
    int matrix [rows][cols] = {
                                    {1,2,3},
                                    {4,5,6},
                                    {7,8,9}                                   
                              };
    printMatrix(matrix);
}