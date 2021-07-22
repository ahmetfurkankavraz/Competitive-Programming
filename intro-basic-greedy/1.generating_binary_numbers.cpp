#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <queue>
using namespace std;

/*
This program gets an integer value as a boundary and 
prints all binary number values from 0 to boundary.
*/

int main()
{
    queue<string> v;
    
    int bound;
    cout << "Please enter a value: ";    
    cin >> bound;

    while (bound > 0)
    {
        string s1 = v.front();
        v.pop();
        
        cout << s1 << endl;
        
        string s2 = s1;

        v.push(s1.append("0"));
        v.push(s2.append("1"));
        bound--;
    }

    return 0;
}