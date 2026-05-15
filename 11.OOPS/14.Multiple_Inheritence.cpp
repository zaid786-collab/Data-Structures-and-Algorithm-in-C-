#include<bits/stdc++.h>
using namespace std;

class teacher{
public:
    string subject;
    int salary;

    // teacher(string subject,int salary){
    //     this-> subject = subject;
    //     this-> salary = salary;
    // }
};

class student{
public:
    int rollno;
    float cgpa;

    // student(int rollno,float cgpa){
    //     this-> rollno = rollno;
    //     this-> cgpa = cgpa;
    // }
};

class TA : public teacher,public  student{
public:
    string name;
};

int main(){
    TA a;
    cout<<"Enter the name of tca : ";
    cin>>a.name;
    cout<<"Name of tca is : "<<a.name<<endl;
    cin>>a.rollno;
    cout<<a.rollno<<endl;
    cin>>a.subject;
    cout<<a.subject<<endl;
    
    return 0;
}