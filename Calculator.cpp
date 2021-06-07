#pragma once
#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Arthmetic.cpp"
#include "State.cpp"
#include "Factory.cpp"

class Calculator{
    public:
        State* state;
        Arthmetic*  arth;
        ArthFactory factory;
        int A,B;
        Calculator(){}
        Calculator(char s[]){
            manageState(s);
        }

        float calculate() {
            return arth -> compute(A,B);
        }

        void setState(State *s) {            
            state = s;
            manageArth(state->getName());
        }

        void manageArth(string s){
            //cout<<"DBG:manageArt"<<s<<endl;
            if ( s.compare("AddState") == 0 )
                arth = factory.makeArth("Add");
            
            else if ( s == "SubState")
                
                arth = factory.makeArth("Sub");
            
            else if ( s == "DivState")
                
                arth = factory.makeArth("Div");
            
            else if ( s == "MulState")
                arth = factory.makeArth("Mul");
            
            else
                cout<<"Undefined-State: "<<s<<endl;
                
        }

        void manageState(char s[]){
            if (strcmp(s,"AddState")  == 0)
                setState(new AddState());
            
            else if (strcmp(s,"SubState")  == 0)
                
                setState(new SubState());
            
            else if (strcmp(s,"DivState")  == 0)
                
               setState(new DivState());
            
            else if (strcmp(s,"MulState")  == 0)
                setState(new MulState());
            
            else
                cout<<"Wrong Input: "<<strcmp(s,"AddState")<<endl;
                
        }
};
