/*
Counting and printing the frequency of array elements
Macros are used for simplicity.
*/

#include <bits/stdc++.h>
using namespace std;

#define FOR(a,b,c) for (int (a)=(b);(a)<(c);(a++))
#define vb vector<bool>
#define PUSH_FALSE(v, size) FOR(a,0,size){v.push_back(false);}

void count(int arr[], int size)
{
    vb v;

    PUSH_FALSE(v, size);

    FOR(a, 0, size)
    {
        if (v[a] == true)
            continue;

        v[a] = true;

        int count = 1;

        FOR(b, a+1, size)
        {
            
            if (arr[a] == arr[b])
            {
                v[b] = true;
                count++;
            }
        }
        cout << "Value: " << setw(3) << arr[a] << "   Repetition: "<< count << endl;
    }
}



int main()
{
    int arr[] = {5,5,5,6,3,1,23,455,1,5,5,3,6,6};

    int size = sizeof(arr) / sizeof(arr[0]);

    count(arr, size);

    return 0;
}