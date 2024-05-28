
#include <cstdlib>
#include "testApp.h"
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int x;
    int y;
    int checker = 0;
    string name ;
    char op;
    testApp test;
    do {
        checker = 0;
        cout << "please enter your name: \n";
        cin >> name;
        printf("Hi  %s, welcome to the calculator program\n", &name);
        cout <<"please insert the operator +,-,%,* \n";
        cin >> op;
        cout << "please enter the two numbers between them a space \n";
        cin >> x >> y;
        
            switch(op)
            {
                case ('+'):
                cout << "The answer is: " << test.add(x,y);
                break;
            
                case ('-'):
                cout << "The answer is: " << test.sub(x,y);
                break;
            
                case ('*','x'):
                cout << "The answer is: " << test.mult(x,y);
                break;
            
                case ('%','/'):
                cout <<"The answer is: " << test.devide(x,y);
                break;

                default:
                cout << "please enter a valid Operator ";
                checker = 1;
            }            
    } while(checker == 1);

    
}

