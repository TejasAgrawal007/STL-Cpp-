
// C++ program to demonstrate descending order sort using
// greater<>(). 


/*

Time Complexity: O(N log N)
Auxiliary Space: O(1)

How to sort in descending order? 
sort() takes a third parameter that is used to specify the order in which elements are to be sorted. We can pass the “greater()” function to sort in descending order. This function does a comparison in a way that puts greater elements before. 

*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {8,7,9,4,5,6,1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size, greater<int>());

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}