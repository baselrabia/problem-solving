// Given a positive integer, find if it is a power of two or not
// 8 Yes
// 14 No

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
 

 

int main() {
    int n;
    cin >> n;

    if ((n & (n - 1)) == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
