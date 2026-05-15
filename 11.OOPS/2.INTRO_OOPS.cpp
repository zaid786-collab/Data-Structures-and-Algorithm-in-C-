#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    // Properties 
    string name;
    float cgpa;

    // Methods
    void getpercentage(){
        cout<<(cgpa*10)<<"%"<<endl;
    }
};

int main(){
    student s1;            // Creation of an object
    cin>>s1.name;
    cout<<s1.name<<endl;
    cout<<sizeof(s1)<<endl;
    return 0;
}

/*
1. OOPS is one of the good approch to write a code.

2. Earlier we are building functions and doing functional programming.

3. Every intity have some [properties/attributes] and [function/member functions/methods] which it can do,so whenever we have to represnet any real world intity in code we use Object to represent it. Ex : Stdudent,Book,Phone,Car etc.

4. Objects are nothing but entities in real-world,as for student we merge all the properties and functions of it in a single box called Object instead of creating seprate variables.

5. Class is a group of those entities from which multiple objects can be created it is a blueprint of an object.

6. Always creates class first and then from it build object.

7. Class is just like a user-defined data type which will be used to create an object that will fetch all properties and functions of that class.
ex : int x --> all properties and  functions of integer comes to variable name x.
    Student S1 --> all properties and function of Student Class will come to Object name S1.

8. Memory is assigned only when an object is created.
*/