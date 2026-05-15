#include<bits/stdc++.h>
using namespace std;

class student{
    // Properties --> Privates
    string name;
    float cgpa;

    public :
    // Methods
    void getpercentage(){
        cout<<(cgpa*10)<<"%"<<endl;
    }

    // Setter --> To set value
    void setname(string newName){
        name = newName;
    }

    void nCgpa(float newCgpa){
        cgpa = newCgpa;
    }

    //Getters --> To get a value
    string getname(){
        return name;
    }

    float getcgpa(){
        return cgpa;
    }
};

int main(){
    student s1;
    s1.setname("MOHAMMAD ZAID KHAN");
    s1.nCgpa(9.7);

    cout<<s1.getname()<<endl;
    cout<<s1.getcgpa()<<endl;
    return 0;
}
/*
1. Getter and setter are the functions which we use in our Class,to prevent the direct access of Class Properties and Methods to Object.

2. Setter sets the value to a data and getter returns the data.

3. In Setter and Getter we are not Giving the Direct access of our data to Object.

4. We are using funcion just to indirectly access the private functions.
*/