#include<iostream>
using namespace std ;

int printPairs(int arr[], int n , int sum )
{
 
    for(int i = 0; i < n; i++) 
    {
        for(int j = i+1; j < n; j++) 
        {
            for(int k = j+1; k < n; k++) 
            {
                if(arr[i] + arr[j] + arr[k] == sum) 
                {

                    cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
                }
            }
        }
    }
}


int main(){

    int arr[] = { 1,4 ,3, 2, 5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 8 ;
    printPairs(arr, n, sum);
    return 0;
}