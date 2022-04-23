//
//  main.cpp
//  DSA_Practice
//
//  Created by Amey Satwe on 13/02/22.
//

#include <iostream>
using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here..
    int x=3;
    fun(x);
    return 0;
}
