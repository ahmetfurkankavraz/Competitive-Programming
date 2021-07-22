#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
This file is a basic template for algorithm questions.
*/

int main(){
    
        
    // basic operaions
    vector<int> v;
    int count = 100000;
    for (int i = 0; i < count; i++)
    {
        v.push_back(i);
    }

    for (int i = 0; i < count; i++)
    {
        cout << v[i] << endl;
    }

    
    return 0;
}