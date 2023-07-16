#include<iostream>
using namespace std ;


int BinarySearch(int arr[], int size, int key )
{
    int start = 0 ;
    int end = size -1 ;

    // int mid = (start + end) / 2 ;  // this is also true but when mid is greater than integer value then its gives error 

    int mid = start + (end - start) /2 ; // so that reason this way is true ..

    while(start <= end ){

        if(arr[mid] == key ){
            return mid ;
        }

        if(key > mid ){
            start = mid + 1 ;
        }
        else{
            end = mid - 1 ; 
        }

        mid = start + (end - start) / 2 ;
    }
    
    return -1 ; 


}


int main()
{
    int arr1[6] = {2, 3, 5, 6, 8, 10 };
    int arr2[7] = {4, 9, 11 ,13 ,17 ,23 ,40};

    // int result =  BinarySearch(arr1, 6, 100) ;
    // int result2 = BinarySearch(arr2, 7, 40) ;

    // if (result == -1 or result2 == -1 ){

    //     cout<<"Key is not present in array .";
    // }
    // else{

        cout<<" 10 index is "<< BinarySearch(arr1, 6, 10) << endl ;
         cout<<" 40 index is "<< BinarySearch(arr2, 7, 40) << endl ;
    // }

}