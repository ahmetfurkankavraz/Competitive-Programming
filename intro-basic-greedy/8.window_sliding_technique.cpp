/*
This is a method for shorting the time.
When the windows are small the difference is not big.
However, when windows are large, the calculations can be hard.

The link of the problem is: 
https://www.geeksforgeeks.org/window-sliding-technique/
*/

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> array = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4; // window length

    if (array.size() < k)
    {
        cerr << "The window length can not greater than size of array!" << endl;
        return 1;
    }

    // calculating the first sum
    int sum = 0;
    for (int i = 0; i < k ; i++)
    {
        sum += array[i];
    }

    int max_sum = sum;

    // sliding the windows
    for (int i = 0; i < array.size() - k ; i++)
    {
        sum += - array[i] + array[i+k]; // smaller item subtracted and new item added.
        
        if (max_sum < sum)
            max_sum = sum; // if greater sum is greater, change the max sum 
    }

    cout << "The largest sum is " << max_sum << " with window " << k << endl;

    return 0;
}