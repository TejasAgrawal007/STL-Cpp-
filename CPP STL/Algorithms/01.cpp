#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 20, 5, 23, 42, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> vect(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    // Sorting vector in assending order
    sort(vect.begin(), vect.end());
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    // vector sorting in decending order
    cout << endl;
    sort(vect.begin(), vect.end(), greater<int>());

    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    cout << endl;
    // Maximum element of vector
    cout << *max_element(vect.begin(), vect.end());

    cout << endl;
    // Minumn element of vector
    cout << *min_element(vect.begin(), vect.end());


    // Starting the sum form 0 -> accumlate
    cout << accumulate(vect.begin(), vect.end(), 0);

    return 0;
}