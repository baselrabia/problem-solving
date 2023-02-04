// input = 10 
// output = 2



/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
     // 0000 0000 0000 1010
    //                8 2
    
    // output 2 
    
    
    
    int n = 10;
    int count = 0;
    while (n) {
        // 1010
        // 0001
        // 0000
        
        // 0101
        // 0001
        // 0001
        count +=  n & 1;
        n = n>>1;
    }
    
    cout<< count <<endl;
 
    return 0;
}
