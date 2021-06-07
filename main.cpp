#include <iostream>
#include <string>
#include "Arthmetic.cpp"
#include "State.cpp"
#include "Factory.cpp"
#include "Calculator.cpp"
#include <unistd.h>
using namespace std;

int main(int argc, char** argv){
    int a,b;
    Calculator CALC;
    cout<<"\t\t================="<<endl;
    cout<<"\t\t Simple Calculator \t\t"<<endl;
    cout<<"\t\t=================\n\n"<<endl;
    cout<<"Initializing Calculator..."<<endl;
    if(argc > 1)
        CALC = Calculator(argv[1]);
    else
        CALC = Calculator("AddState");
    sleep(1);
    cout<<"Done...[Calculator State:"<<CALC.state->getName()<<"]"<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>a; CALC.A = a;
    cout<<"Enter the second number"<<endl;
    cin>>b; CALC.B = b;
    cout<<"Calculating..."<<endl;
    sleep(1);
    cout<<CALC.calculate()<<endl;

    return 0;
}