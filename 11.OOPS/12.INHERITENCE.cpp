#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
    string color;

    void eat(){
        cout<<"eats\n";
    }

    void breathe(){
        cout<<"breathes\n";
    }
};


class fish : public Animal{
public:
    int fins;

    void swim(){
        cout<<"swims\n";
    }


};

int main(){
    fish f1;
    cin>>f1.color;
    cout<<f1.color<<endl;
    f1.eat();
    return 0;
}

/*
1. Inheritence --> When properties and memeber functions of a [base/parent] class are passed on to the derived class.

2. Inheritence insures code reusability and optimise it.

3. By default inheritence is private in cpp.

4. If anything is private in parent class then it will not be accesible in child class,doesn't matter if it is public or protected.

5. If properties and methods are public in parent class then they will be public in child class also.

6. If mode is set to protected then all the content which is public in parent class will be transferred as protected and protected will remain protected while private will not be accessible at all.

7. If mode is set to private then all the content which is public in parent class will be transferred as private and protected will also be private while private will not be accessible at all.

8. The only difference between protected and private access modifier is in Protected the Content[Properties and Methods] are asseccible both in class itself and in child class but in Private only content assecced inside the class.

9. Private in not inheretenable while Protected is.

10. Private is most strict then comes Protected and then Public.
Private --> Protected --> Public.
*/