#include<bits/stdc++.h>
using namespace std;

class bike{
    public:
    string name;
    int rpm;
    int *milage;

    // CONSTRUCTOR
    bike(string name,int rpm){
        this->name = name;
        this->rpm = rpm;
        milage = new int;       // DYNAMIC ALLOCATION IN HEAPS
        *milage = 35;
    }

    // COPY CONSTRUCTOR USER DEFINED
    // bike(bike &orignal){
    //     cout<<"Copying orignal to new...";
    //     name = orignal.name;
    //     rpm = orignal.rpm;
    //     milage = new int;        // Creates new variable in a heap not a address.   
    //     *milage = *orignal.milage;
    // }

    // CUSTOM DESTRUCTOR
    ~bike(){
        cout<<"Deallocating Memory in heaps...";
        if(milage != NULL){
            delete milage;
            milage = NULL;
        }
    }
};

int main(){
    bike honda("SHINE",890);
    cout<<honda.name<<endl;
    cout<<honda.rpm<<endl;
    cout<<*honda.milage<<endl;
    return 0;
}

/*
1. Destructor is just opposite of an constructor.

2. Constructor is used to initilise value to a object data,destructor is used to delete that object data from memory.

3. Like Constructor,Destructor is also get created by itself once the object goes out of its scope.

4. In case of Dynamic Allocation of memory we have to create our custom Destructor to delalocate the dynamic memory.

5. For Dynamic Memory Allocation -> Creates Custom Constructor[In case of Deep Case].
   For Dynamic Memory Deallocation -> Creates Custom Destructor. 

6. Memory in heap will not  be deleted without Custom Destructor whcih will leads to memory leak.
*/