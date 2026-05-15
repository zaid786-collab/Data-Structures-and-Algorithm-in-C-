#include<bits/stdc++.h>
using namespace std;

class car{
    public:
    string name;
    string color;

    // CONSTRUCTOR
    car(string name,string color){
        this->name = name;
        this->color = color;
    }

    // USER-DEFINED COPY CONSTRUCTOR : 
    car(car &original){
        cout<<"COPYING ORIGNAL CONSTRUCTOR...\n";
        name = original.name;
        color = original.color;
    }
};

int main(){
    car c1("maruti 800","white");

    car c2(c1);         // THIS WILL CREATE A BY DEFAULT COPY CONSTRUCTOR THAT WILL HAVE SAME PROPERTIES AS c1.
    cout<<"CAR 2 NAME : "<<c2.name<<endl;
    cout<<"CAR 2 COLOR : "<<c2.color<<endl;
    return 0;
}

/*
1. COPY CONSTRUCTOR is created by default or we creates it which is used when we have to copy the properties of one object into another object.

2. We can create our own copy constructor by giving refernce of the original constructor.

3. When we create our own Copy Constructor then it will do same work which was done by default Copy Constructor.
*/