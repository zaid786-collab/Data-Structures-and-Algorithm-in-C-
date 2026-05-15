#include<bits/stdc++.h>
using namespace std;
class Student{      // CLASS STUDENT CREATED
        public:
        int roll;    // CLASS MEMBERS AND RAW DATA
        string name;
        
        void show(){
            cout<<"Roll Number is : "<<roll<<endl;
            cout<<"Your name is : "<<name<<endl;
        }
    };
int main(){
    Student s;        // OBJECT s CREATED-- [Class_name Object_name]
    cin>>s.roll;      // MEMBER FUNCTION[METHOD] ACCESSED
    cin>>s.name;
    s.show();

    return 0;
}

// string s;
    // cin>>s;
    // cout<<s+" a student";
    // string z = " a student";
    // cout<<s.append(z);