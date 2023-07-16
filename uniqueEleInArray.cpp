#include<iostream>
using namespace std ;

int findUniquEle(int arr1[],  int size){

    int ans = 0 ;

    for(int i = 0 ; i < size ; i ++){

        ans = ans^arr1[i];

    }
    return ans ;

}

int main()
{
    int arr[100] , size ;

    cout<<"How many number which you are included in array : "<<endl;
    cin>>size;

    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }

    cout << "ANswer is : " << findUniquEle(arr, size);

    



}