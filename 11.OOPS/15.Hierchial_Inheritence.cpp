#include<bits/stdc++.h>
using namespace std;

class animal{
public:
    string specie;

    void eats(){
        cout<<"Animal Eats\n";
    }

    void breathe(){
        cout<<"Animal Bratehs\n";
    }
};

class monkey : public animal{
public:
    string name;
};

class donkey : public animal{
public:
    string name;
};

class dog : public animal{
public:
    string name;
};

int main(){
    dog tom;
    cout<<"Name of Dog : ";
    cin>>tom.name;
    cout<<"Name of Dog : "<<tom.name<<endl;

    monkey alex;
    cout<<"Name of Monkey : ";
    cin>>alex.name;
    cout<<"Name of Monkey : "<<alex.name<<endl;

    alex.eats();
    tom.breathe();

    return 0;
}