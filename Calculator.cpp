#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include "Arthmetic.cpp"
#include "State.cpp"
#include "Factory.cpp"

class Calculator{
    public:
        string state;
        Arthmetic*  arth;
        ArthFactory factory;
        int A,B;

        Calculator(string s){
            setState(s);
        }

        float calculate() {
            return arth -> compute(A,B);
        }

        void setState(string s) {
            
            state = s;
            manageArth(state);
        }

        void manageArth(string s){

            if ( s.compare("AddState") == 0 )
                arth = factory.makeArth("Add");
            
            else if ( s == "SubState")
                
                arth = factory.makeArth("Sub");
            
            else if ( s == "DivState")
                
                arth = factory.makeArth("Div");
            
            else if ( s == "MulState")
                arth = factory.makeArth("Mul");
            
            else
                cout<<"Undefined-State"<<endl;
                
        }

        void manageState(string s){
            if ( s == "Add")
                setState("AddState");
            
            else if ( s == "Sub")
                
                setState("SubState");
            
            else if ( s == "Div")
                
               setState("DivState");
            
            if ( s == "Mul")
                setState("MulState");
            
            else
                cout<<"Wrong Input"<<endl;
                
        }
};
