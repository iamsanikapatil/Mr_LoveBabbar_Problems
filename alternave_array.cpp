#include<iostream>
using namespace std ;

int alternative(int arr[], int size)
{
    for(int i = 0 ; i < size ; i+=2){

        swap(arr[i], arr[i+1]);
    }
}


int main(){

   int arr[100], size , key ;

    cin>>size ;

    for(int i = 0 ; i < size ; i ++ ){
        cin>>arr[i];
    }


    cout<<"array is : " ;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<< " ";
    }

     alternative(arr, size );

    cout<<" After array is : " ;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<< " ";
    }
   


}