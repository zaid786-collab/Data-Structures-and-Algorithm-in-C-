#include<bits/stdc++.h>
using namespace std;

class Shape{
public:
    virtual void draw() = 0;  // Pure Virtual Function
};

int main(){

    return 0;
}

/*
1. Abstraction : Hiding all unnecessary details & showing only the important parts.

2. One way to do so is Access Modifiers and other way is using Abstract Classes and Pure Virtual Functions.

3. An Abstract Classes is an Class which is used in Inheritence to create an BluePrint of the Child Class its Object is never Created.

4. It is compolsary to keep at least One Pure Virtual Function in Abstract Class.

5. An abstract Class is a type of Class with no clear Defination so we can't create an Object of it. ex : Class Shape{...}.

6. Pure Virtual Functions are those functions how have no clear definatio. ex : draw() function.

7. Properties of Abstract Class : 

    a. Abstract classes are used to provide a base class from which other classes can be derived.

    b. Their object can't be created and are meant to be inherited.

    c. Abstract classes are typically used to define an interface[blueprint] for derived classes.

    d. Their should be atleast One Pure Virtual Function in Abstract Class.
*/