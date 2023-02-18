// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
// recursion problem 

// Y. Number of Ways
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given two numbers S
//  and E
//  where S
//  denotes a start point and E
//  denotes an end point. Determine how many possible ways to reach point E
//  if you can move either 1 step, 2 steps or 3 steps at a time.

// Note: Solve this problem using recursion.

// Input
// Only one line contains two numbers S
//  and E
//  (1≤S≤E≤15)
// .

// Output
// Print the answer required above.

// Example
// inputCopy
// 2 5
// outputCopy
// 4
// Note
// In the first example:

// There are 4 ways to reach from point 2 to point 5 as follows: [2, 3, 4, 5], [2, 3, 5], [2, 4, 5] and [2, 5].

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int countWays(int curr_pos, int end_pos) {
    if (curr_pos == end_pos) {
        return 1;
    } 
    
    if (curr_pos > end_pos) {
        return 0;
    } 
    
    
    int ways = 0;
    
    ways += countWays(curr_pos + 1, end_pos);
    ways += countWays(curr_pos + 2, end_pos);
    ways += countWays(curr_pos + 3, end_pos);
    
    return ways;
}



int main()
{
    int S, E;
    cin >> S >> E;
    cout << countWays(S, E) << endl;
        

    return 0;
}
