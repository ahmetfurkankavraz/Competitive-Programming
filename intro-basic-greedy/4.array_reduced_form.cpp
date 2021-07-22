/*
Simplifying the array elements magnitude.
Which means change the array values with 
a number between 0 and size-1
accourding to the order of the number.

{10  20  60 123  51   3  13}
            ===
{ 1   3   5   6   4   0   2}
*/


#include <bits/stdc++.h>
#include <map>
using namespace std;

#define FOR(a,c) for (int a=0; i<c; i++)

int main()
{
    // initalize arrays
    int arr[] = {10, 20, 60, 123, 51, 3, 13};

    int size = sizeof(arr) / sizeof(arr[0]);

    int simplified_array[size];


    
    //copying array
    FOR (i,size)
    {
        simplified_array[i] = arr[i];
    }

    sort(simplified_array, simplified_array+size);

    map<int, int> order;

    // the map is used for getting the order of numbers
    FOR (i,size)
    {
        order[simplified_array[i]] = i;
    }

    // the numbers changed with orders 
    FOR (i,size)
    {
        simplified_array[i] = order[arr[i]];
    }



    // printing the arrays
    FOR (i,size)
    {
        cout << setw(3) << arr[i] << " ";
    }   cout << endl;
    
    FOR (i,size)
    {
        cout << setw(3) << simplified_array[i] << " ";
    }   cout << endl;

    return 0;
}