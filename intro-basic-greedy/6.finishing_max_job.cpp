/*
The inputs includes the start and finish time of the jobs.
Program should run efficiently and do max job.

Algorithm is simple.
Sort the jobs according to their finish time.

Firstly, get 0 index as beginning.
After that get the job that has minimum starting time 
and greater or equal starting time than lastly finished job.


*/


#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define FOR(a) for (int i=0; i < a; i++){

struct data{
    int start;
    int finish;
};

// used in sorting
bool order(data s1, data s2)
{
    return s1.finish < s2.finish;
}

int main()
{
    int start[] = {5,8,5,1,3,0};
    int finish[] = {7,9,9,2,4,6};

    int size = sizeof(start) / sizeof(int);

    vector<data> v;

    // transferring datas from arrays to vector.
    FOR(size)
        data d;
        d.start = start[i];
        d.finish = finish[i];
        v.push_back(d);
    }

    // sorting the vector according to finish time (order function) 
    sort(v.begin(), v.end(), order);

    /*
    FOR(size)
        cout << v[i].start << " " << v[i].finish << endl;
    }   cout << endl;    
    */

    // 0-index is used for start
    int curr_index = 0;
    cout << v[curr_index].start << " " << v[curr_index].finish << endl;

    // check the condition:
    // if i-indexth start time is greater than current finish time
    // change the current index
    FOR(size)
        if (v[curr_index].finish <= v[i].start)
        {
            curr_index = i;
            cout << v[curr_index].start << " " << v[curr_index].finish << endl;
        }
    }

    return 0;
}
