#pragma once
#include <iostream>

using namespace std;

class Arthmetic{
    public:
       virtual float compute (int, int) = 0;
};

class Add: public Arthmetic {
    public:        
        Add(){}
        float compute (int A, int B) {
            return A + B;
        }
};

class Sub: public Arthmetic {    
    public:        
        Sub(){}
        float compute (int A, int B) {
            return A - B;
        }
};

class Div: public Arthmetic {    
    public:        
        Div(){}
        float compute (int A, int B) {
            return A/B;
        }
};

class Mul: public Arthmetic {    
    public:        
        Mul(){}
        float compute (int A, int B) {
            return A * B;
        }
};
