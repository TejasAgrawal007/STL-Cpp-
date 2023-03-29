#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[] = {8,7,9,4,5,6,1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
    sort(arr, arr+size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    



    return 0;
}