#include<iostream>
using namespace std ;

int linearSearch(int arr[], int size, int key ){

    for(int i = 0 ; i < size ; i ++ ){

        if(arr[0] == key )
        {
            return 1 ;
        }else{
                  return 0 ; 
        }
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
    cout<< endl;
    cout<<"Which element you want to search : ";
    cin>>key ;
    int fount = linearSearch(arr , size, key );
    if (fount==1){
        cout<<"Element is present ";
    }
    else{
        cout<<"Element is not present ";
    }
}