#include<iostream>
using namespace std ;

int delete_ele(int arr[], int size, int pos )
{

    for(int i = pos  ; i <= size ; i ++ ){

        arr[i - 1 ] = arr[i];

    }
}

int main(){

    int arr[100] = { 1, 2, 3, 4,5};

    int pos = 2 ;
    int value = 10 ;

    delete_ele(arr, 5, pos );

    for (int i =0 ; i < 5- 1 ; i ++){
        cout<<arr[i]<<" " ; 
    }
}
