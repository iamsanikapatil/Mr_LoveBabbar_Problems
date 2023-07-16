#include<iostream>
using namespace std ;

void alterrr(int arr1[] , int size){

    for(int i = 0 ; i < size ; i+=2){
        if(i+1 < size){
            // int temp = arr1[i];
            // arr1[i] = arr1[i+1];
            // arr1[i]= temp ;

            swap(arr1[i], arr1[i+1]);
        }
    }
}
void printarray(int arr2[], int n){

    for(int i = 0 ; i < n  ; i ++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    int arr[50],num,i, j , temp;

    int even[6] = {12, 34, 56, 13 ,89, 90};
    int odd[5] = {85, 54, 76,93, 31};

    alterrr(even, 6);
    printarray(even, 6);
    alterrr(odd, 5);
    printarray(odd,5);


    cout<<"Enter the ele
    ment which you want to insert in aaray :";
    cin>>num ;

    for(i=0;i<num;i++)
    {
        cout<<endl<<"Enter the elements : ";
        cin>>arr[i];
    }

    for(int i = 0 , j = num - 1 ; i < num / 2 ; i ++ , j --)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[i]= temp ;
    }

    cout<<"Reverse array is : "<<endl;

    for(i=0;i<num;i++)
    {
        cout<<arr[i]<< " ";
    }


}