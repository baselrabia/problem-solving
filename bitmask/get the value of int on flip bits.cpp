/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iostream>
#include <cmath>

using namespace std;

int getPower(int i){
    int res= 1;
    while(i--){
        res *=2;
    }

    return res;
}


int main()
{

     /*

     input= 8;
     3 quesies
     = {0 , 5 , 13} flip

     */


    int n,flip_n,num;

    cin >> n;
    cin >> flip_n;

    int flip[flip_n];
    for (int i = 0; i < flip_n; i++) {
         cin >> flip[i];
    }


    for(int i : flip){
        num = 1 << i;
        // that will get the mask index
        // then by xor u will get the change;
        
        n = n ^ num;
            //cout<< num << " " <<n <<endl;

        // 0000 1000
        // 0000 0001

        // 0000 1001 //9

        // 0001 0000
        // cout<< i <<endl;

    }

     cout<< n <<endl;

    return 0;
}
