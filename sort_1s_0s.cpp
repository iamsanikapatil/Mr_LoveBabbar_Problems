#include<iostream>
using namespace std ;

// july 9 2023 12.24 AM

void printArray(int arr[], int size)
{

    for(int i = 0; i < size ; i ++ )
    {
        cout << arr[i]<< " " ;
    }
}

void sortArray(int arr[], int size){

    int left = 0 , right = size-1;

    while(left< right){

        while(arr[left]== 0 && left < right){
            left ++ ;
        }
         while(arr[right]== 1 && left < right){
            right -- ; 
        }

        if(left < right){

            swap(arr[left] , arr[right]);
            left ++ ;
            right -- ;
        }
    }
}

int main()
{
    int arr[8] = { 1, 0, 1, 0, 1, 0, 1, 0};

    sortArray(arr, 8 );

    printArray(arr, 8 );

}