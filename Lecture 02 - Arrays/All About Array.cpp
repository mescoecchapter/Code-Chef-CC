#include<bits/stdc++.h>
using namespace std;

//This is global declaration of the array
//All element will be zero by default
int globalArray[5];

int main(){

	//local array contains garbage values by default
	int localArray[5];

	//Declaration and Initialization
	//Using same array name just to give various scenarios

	int arr[5] = {1,2,3,4,5}; //valid
	
	int arr[] = {1,2,3,4,5}; //valid
	
	int arr[]; //Invalid
	
	int arr[5]; //valid(will contain garbage values)
	arr[2] = 100; // updating individual element using perticular index

	
	int arr[5] = {0}; //All elements get initialized to zero
	int arr[5] = {1}; //first element get initialized to 1 other will be zero

	int arr[5] = {1,2};// first two will get initialized to 1,2 other will be zero

	//----- Common types of Array ----

	int arr[5] //---> this is 1D array
	int arr[2][3] //---> this is 2D array of 2 * 3 = 6 elements



	// Size of the array can be calculated using sizeof operator

	int arr[5];

	int sizeOfArr = sizeof(arr) / sizeof(int); //this will give 5 i.e size or arr

	//----------how it works-------
	// Arrays are also called internal pointers

	//'arr' i.e name of the array hlods address of first element of the array

	//arr[0] is same as --> 0[arr]
	//arr[0] is same as --> *(arr + 0)

	// Taking input from the user and printing--> 1D array

	int arr[5];

	int totalElements;

	cin>>totalElements;

	for(int i = 0; i < totalElements; i++){

		cin>>arr[i];
	}

	for(int i = 0; i < totalElements; i++){

		cout>>arr[i];
	}

	// Taking input from the user --> 2D array

	int arr[2][3];

	int rows, columns;

	cin>>rows>>columns;

	for(int i = 0; i < rows; i++){

		for(int j = 0; j < columns; j++){

			cin>>arr[i][j];
		}
	}


	for(int i = 0; i < rows; i++){

		for(int j = 0; j < columns; j++){

			cout<<arr[i][j]<<" ";
		}

		cout<<endl;
	}










	return 0;
}