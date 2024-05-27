
#include <cstdlib>
#include "testApp.h"
#include <iostream>

using namespace std;

int main() {
    char name[] = "Ezz";
   
    printf("Welcome to %s calculator \n", name);
    
    testApp test;
    
    cout << "The Added answer is = "<< test.add(4, 4) << endl;
    
    cout << "The Subtracted answer is = "<< test.sub(7,2) << endl;
    
    return 0;
}

