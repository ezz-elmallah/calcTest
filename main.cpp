
#include <cstdlib>
#include "testApp.h"
#include <iostream>

using namespace std;

int main() {
    char name[] = "Ezz";
   
    printf("Welcome to %s calculator", name);
    
    testApp test;
    
    cout << test.add(4, 4);
    
    return 0;
}

