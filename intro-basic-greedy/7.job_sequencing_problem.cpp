/*
The question link is in below:
https://www.geeksforgeeks.org/job-sequencing-problem/

I just change the question a little bit.
The tasks have not a name so that we calculate the total amount of profit.

The algorithm is as in the link:

First we should sort the array according to the descending profit order.

Then, we should have a counter and check the deadline.

If counter smaller than deadline we can add the profit to total profit 
(and increment counter for representing job is done)

else, do nothing.
*/


/* Example input:

Please write number of tasks: 5
Please write the deadline and profit of the tasks
2 100
1 19
2 27
1 25
3 15
Inputs are completed
The maximum profit is 142 at 3 time.
*/




#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// structure for datas
struct Task{
    int deadline = 0;
    int profit = 0;
};


// for ordering the vector
bool order(Task a, Task b){
    return a.profit > b.profit;
}

int main(){

    // input operations for task count
    cout << "Please write number of tasks: ";
    int task_count;
    cin >> task_count;

    // vector which will include all of the tasks
    vector<Task> v;

    // input operations for tasks
    cout << "Please write the deadline and profit of the tasks" << endl;
    for (int i = 0; i < task_count; i++)
    {
        Task t;
        cin >> t.deadline >> t.profit;
        v.push_back(t);
    }
    cout << "Inputs are completed" << endl;

    // sorting 
    sort(v.begin(), v.end(), order);
    
    int counter = 0;
    int total = 0;

    // calculating the profit
    for (int i = 0; i < task_count; i++)
    {
        if (counter < v[i].deadline)
        {
            total += v[i].profit;
            counter++;
        }        
    }

    cout << "The maximum profit is " << total << " at " << counter << " time." << endl;

    return 0;    
}