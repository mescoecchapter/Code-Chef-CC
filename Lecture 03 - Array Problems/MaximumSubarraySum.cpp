#include<bits/stdc++.h>
using namespace std;

int currSum = 0, maxSum = 0;

int main(){

	// First Brute Force approach

	int arr[100];
	int i,j,k;
	int totalElements;

	cin>>totalElements;

	for(int i = 0; i < totalElements; i++){

		cin>>arr[i];
	}

	for(int i = 0; i < totalElements; i++){

		for(int j = i; j < totalElements; j++){

            currSum = 0;

			for(int k = i; k <= j; k++){

				currSum = currSum + arr[k];
			}

            maxSum = max(maxSum, currSum);

		}
        
	}

    cout<<maxSum<<endl;
}

//--------------------------------------------------------------------
	

// Second approach( using cumulative sum )

#include<bits/stdc++.h>
using namespace std;

int currSum = 0, maxSum = 0;
int cumuSum[100];

int main(){

	int arr[100];
	int i,j,k;
	int totalElements;

	cin>>totalElements;

	cin>>arr[0];
	cumuSum[0] = arr[0];

	for(int i = 1; i < totalElements; i++){

		cin>>arr[i];

		cumuSum[i] = cumuSum[i - 1] + arr[i];
	}

	for(int i = 0; i < totalElements; i++){

		for(int j = i; j < totalElements; j++){

            currSum = 0;

            currSum = cumuSum[j] - cumuSum[i - 1];


            maxSum = max(maxSum, currSum);

		}
        
	}

    cout<<maxSum<<endl;
}

//----------------------------------------------

// Third approach kadanes's Algorithms 
#include<bits/stdc++.h>
using namespace std;

int currSum = 0, maxSum = 0;

int main(){

	int arr[100];
	int totalElements;

	cin>>totalElements;

	for(int i = 0; i < totalElements; i++){

		cin>>arr[i];

	}

	for(int i = 0; i < totalElements; i++){

		currSum += arr[i];

		if(currSum < 0){

			currSum = 0;
		}

		maxSum = max(maxSum, currSum);
	}

	cout<<maxSum<<endl;

}