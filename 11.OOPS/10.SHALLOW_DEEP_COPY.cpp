#include<bits/stdc++.h>
using namespace std;

class bike{
    public:
    string  name;
    string rpm;
    int *milage;

    // CONSTRUCTOR : 
    bike(string name,string rpm){
        this->name = name;
        this->rpm = rpm;
        milage = new int;       // DYNAMIC ALLOCATION IN HEAPS
        *milage = 35;
    }

    // COPY CONSTRUCTOR USER DEFINED
    bike(bike &orignal){
        cout<<"Copying orignal to new...";
        name = orignal.name;
        rpm = orignal.rpm;
        milage = new int;        // Creates new variable in a heap not a address.   
        *milage = *orignal.milage;
    }

};

int main(){
    bike shine("Honda Shine","90");

    bike pulsar(shine);     // Builds Copy Constructor,copying all properties of shine to pulsar.
    cout<<"Pulsar name : "<<pulsar.name<<endl;
    cout<<"Pulsar rpm : "<<pulsar.rpm<<endl;
    cout<<"Pulsar milage : "<<*pulsar.milage<<endl;

    // Milage in both of them pointing to same dynamic memory in heap,so update in one also update other.
    // But in Deep Copy,Milage in both of them are  different dynamic memory in heap,so update in don't  update other.
    *pulsar.milage = 28;
    cout<<"MILAGE OF HONDA SHINE NOW : "<<*shine.milage<<endl;

    // Rpm of shine do not change as new variables are created in copy constructor for static data.
    pulsar.rpm = "280";
    cout<<"RPM OF HONDA SHINE NOW : "<<shine.rpm<<endl;
    return 0;
}

/*
1. When a copy constructor is created then all the static data and methods of that object are copied and Dynamically stored data[mainly in heaps] is copied as pointer[means its address is passed pointing to same heap location instead of creating new one] this is known as Shallow Copy.

2. In shallow copy no new memory is allocated in heap but the address is copied to copy constructor,and for static data exact new copy is created.

3. When we want to create a brand new copy of dynamic data in a constructor instead of passing the address then we use Deep Copy.

4. We create Copy Constructor only when we need to go fo deep copy methods because by default compiler will create an Copy Constructor which will make shallow copy of it[passing address of dynamic data].
*/