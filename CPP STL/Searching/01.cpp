
// CPP program to implement
// Binary Search in
// Standard Template Library (STL)

#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main(){
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,size);
    cout<<endl;
    sort(arr, arr + size);
    printArray(arr,size);
    cout<<endl;

    int element;
    cout<<"Enter Element Which You want to Find: ";
    cin>>element;

    if (binary_search(arr, arr + 10, element))
    {
        cout<<"Element Found"<<endl;
    }else{
        cout<<"Element is Not Found"<<endl;
    }
    





    return 0;
}