#include <bits/stdc++.h>
using namespace std;


/*
Basic reverse and print array functions
*/

void reverse_array(int arr[], int s, int e)
{
    while (s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

void print_array(int arr[], int e)
{
    int x = 0;
    while (e--)
    {
        cout << arr[x++] << " ";
    }
    cout << endl;
}


int main(){

    int array[] = {0,1,2,3,4,5,6,7,8,9};

    int size = sizeof(array) / sizeof(array[0]);

    print_array(array, size);

    reverse_array(array, 0, size-1);

    print_array(array, size);


    return 0;
}