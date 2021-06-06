#pragma once
#include <iostream>
#include <string>
using namespace std;

class State{
    
    public:
        State () {}
        string name;
        virtual void setName() = 0;

};

class AddState: public State{
    public:
        string name;
        AddState(){
            setName();
        };
        void setName(){
            name = "AddState";
        }

};

class SubState: public State{
    public:
        string name;
        SubState(){
            setName();
        };
        void setName(){
            name = "SubState";
        }
};

class MulState: public State{
    public:
        string name;
        MulState(){
           setName();
        };
        void setName(){
            name = "MulState";
        }
};

class DivState: public State{
    public:
        string name;
        DivState(){
            setName();
        };
        void setName(){
            name = "DivState";
        }
};
