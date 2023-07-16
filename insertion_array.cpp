#include<iostream>
using namespace std ;

int insetion_ele(int arr[],int size , int pos, int value)
{
    for(int i = size + 1 ; i >= pos ; i --)
    {
        arr[i + 1] = arr[i];
    
    }
    arr[pos] = value ;

}

int main(){

    int arr[100] = { 1, 2, 3, 4,5};

    int pos = 3 ;
    int value = 10 ;

    insetion_ele(arr,5, pos, value);

    for(int i = 0 ; i < 6 ; i ++){
        cout<<arr[i]<<" ";
    }
}
