/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
     /*
     
     input= 8;
     3 quesies 
     = {0 , 5 , 13} flip
     
     
     
     
     
     */ 
    
    
    
    int n = 8;
    int flip[3] = {0,5,13};
    
    for(int i : flip){
        n = (i*2) | n;
        // 0000 1000
        // 0000 0001
        
        // 0001 0000
        // cout<< i <<endl;

    }
  
     cout<< n <<endl;

    return 0;
}
