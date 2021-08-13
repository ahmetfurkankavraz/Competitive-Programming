/*
Program:
Returning that a number is power of 2 or not?
    in O(1)

Bitwise Operations can be used for this.
*/



#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int x = 1;
    while (true)
    {
        cout << "Please write a number: ";
        
        cin >> x;
        
        if (x <= 0)
            break;

        if ((x & (x-1)) == 0)
            cout << "Power of 2" << endl;
        else 
            cout << "Not power of 2" << endl;
    }


    return 0;
}