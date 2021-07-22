/*
Finding the largest subarray sum.
The goal is sum should be max, not the count of elements. 
*/

#include <bits/stdc++.h>
using namespace std;

#define FOR(c) for (int i = 0; i < c; i++){

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};

    int size = sizeof(arr) / sizeof(arr[0]);

    int max_ = -1561531, max_last = 0;


    FOR(size)
        max_last += arr[i];    
        
        if (max_ < max_last)
            max_ = max_last;

        if (max_last < 0)
            max_last = 0;
        //cout << max_  << " " << max_last << endl;
    }

    cout << max_ << endl;

    return 0;
}