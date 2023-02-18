// recursion problem 
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X


// X. The maximum path-sum
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given a matrix A
//  of size N
// *M
// . Print the maximum sum of numbers that can be obtained when you take a path from A1,1
//  to AN,M
// .

// If you stay in Ai,j
//  you can only go to :

// Ai+1,j
//  if and only if i≤N
// Ai,j+1
//  if and only if j≤M
// Note: Solve this problem using recursion.

// Input
// First line contains two numbers N
//  and M
//  (1≤N,M≤10)
//  N
//  donates number of rows and M
//  donates number of columns.

// Next N
//  lines each of them will contain M
//  numbers (−105≤Ai,j≤105)
// .

// Output
// Print the maximum sum of numbers can be obtained.

// Example
// inputCopy
// 3 3
// 5 2 4
// 1 3 5
// 9 2 7
// outputCopy
// 24


/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
 

#include <iostream>
#include <algorithm>
using namespace std;


int N, M;
int A[10][10];

int solve(int i, int j) {

    // base case down right 
    if (i == N-1 && j == M-1) {
        return A[i][j];
    }
    
    // base case out of bounds
    if (i >= N || j >= M) {
        return 0;
    }
    
    //  max down or right
    int down = solve(i+1, j);
    int right = solve(i, j+1);
    
    return A[i][j] + max(down, right);
}



int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }


    int result = solve(0, 0);
    cout << result << endl;
    return 0;
}

 
