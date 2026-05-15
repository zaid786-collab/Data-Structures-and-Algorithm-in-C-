#include<bits/stdc++.h>
using namespace std;

class car{
    string name;
    float rpm;

    public:
    // Non-Parameterised Constructor
    car(){
        cout<<"Constructor without Parameters.\n";
    }

    // Also using Constructor as a setter here.
    //Constructor User-Defined Parameterised
    car(string name,float rpm){
        cout<<"Constructor is called,object being created..\n";
        this->name = name;
        this->rpm = rpm;
    }

    // Methods
    void startcar(){
        cout<<"Car is starting..\n";
    }

    void stopcar(){
        cout<<"Car is stoping..\n";
    }

    // Getter
    string carname(){
        return name;
    }

    float carrpm(){
        return rpm;
    }
};

int main(){
    car c0;     // Automatically Non-Parametrised constructor will be called.
    car wagonr("Maruti Wagon R",987);
    cout<<"CAR NAME : "<<wagonr.carname()<<endl;
    cout<<"CAR RPM : "<<wagonr.carrpm()<<endl;
    car c2("Fortuner",1987);
    return 0;
}

/*
1. Constructor are the special methods invoked automatically at time of object creation.Used for initilisation.

2. To create a user defined Constructor use same name as class.

3. Constructor doesn't have a return type.

4. Constructor are called automatticaly only once at the time of object creation.

5. Constructor are used for initilisation.

6. Memort allocation happens when constructor is called.

7. "this" is a special pointer in cpp that points to the current object that is being called.

this --> property is same as *(this).property.

8. There are 2 types of constructor one is Non-Parameteised which is by default created and another one is Parameterised which is used to initilise the values.

9. In same class various constructor of same name can be created which we called Constructor Overloding.
*/