#pragma once
#include <iostream>
#include "Arthmetic.cpp"
using namespace std;

class ArthFactory {
    public:

        ArthFactory(){}

        Arthmetic* makeArth(string name){
            if ( name == "Add")
                return new Add();
            else if ( name == "Sub" )
                return new Sub();
            else if ( name == "Div" )
                return new Div();
            else if ( name == "Mul" )
                return new Mul();
            else
                cout<<"No Arthmetic"<<endl;
        }
};