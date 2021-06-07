#pragma once
#include <iostream>
#include <string>
using namespace std;

class State{
    private: 
        string name;
    public:
        State(){};
        virtual ~State () {};
        virtual void setName() {};
        virtual string getName() {};

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
        string getName(){
            return name;
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
        string getName(){
            return name;
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
        string getName(){
            return name;
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
        string getName(){
            return name;
        }
};
