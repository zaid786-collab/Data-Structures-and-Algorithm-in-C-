#include<bits/stdc++.h>
using namespace std;

// STATIC IN FUNCTION : 
void counter(){
    static int count = 0;
    count++;
    cout<<"Count : "<<count<<endl;
}

// STATIC IN CLASS : 
class Example{
public:
    static int x;
};

int Example::x =0;

int main(){
    // counter();
    // counter();
    // counter();

    Example eg1;
    Example eg2;
    Example eg3;

    cout<<eg1.x++<<endl;
    cout<<eg2.x++<<endl;
    cout<<eg3.x++<<endl;
    return 0;
}
/*
1. Static keyword : 

a. Static Variables[In Function] : Variables declared as static in a function are created & initilised once for the lifetime of the program.

b. Static Variables[In Class] : Static variables in a class are created & initilised once.They are shared by all the object of the class.

2. Every time an function is called a new variable is created in stack memory and as it ends that variable also ends,this is how a normal variable works.

3. But,if we declare it as an Static then it will not delete on the completion of a function.

4. Functions declared as static are initilised and excecuted once,next time a function is called it will not be excecuted and updatio will take place on previous values.

5. Static Variables in a Class are shared by all the objects as it becomes an variable of class instead of variable of an Object.
*/