// recursion problem 
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q

// Q. 3n + 1 sequence
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given a number n
// , you should print the length of the 3n+1
//  sequence starting with n
// .

// The sequence is constructed as follows:

// If the number n
//  is odd, the next number will be 3n+1
// .
// If the number n
//  is even, the next number will be n/2
// .
// For example, the 3n+1
//  sequence of 3
//  is {3,10,5,16,8,4,2,1
// } and its length is 8
// .

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number n
//  (1≤n≤105)
// .

// Output
// Print the length of 3n+1
//  sequence of the given n
// .

// Examples
// inputCopy
// 1
// outputCopy
// 1
// inputCopy
// 2
// outputCopy
// 2
// inputCopy
// 3
// outputCopy
// 8

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int sequence(int n)
{
    
    //base case 
    if( n == 1 ) return 1;
    
    
    if(n % 2 == 0)//even 
    {
        n = n/2 ; 
    }else{ //odd
        n = 3*n + 1;
    }
    
    return  1 + sequence(n);
}




int main()
{
    int num;
    cin>>num;
    
    cout << sequence(num) << endl;

    return 0;
}
