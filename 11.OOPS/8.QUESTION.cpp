#include<bits/stdc++.h>
using namespace std;

class userid{

    int id;
    string password;

    public :
    string username;

    //CONSTRUCTOR TO INITLISE id
    userid(int id){
        this->id = id;
    }

    //SETTERS
    void setpassword(string newpassword){
        password = newpassword;
    }

    // GETETRS 
    int idreturn(){
        return id;
    }

    string getpass(){
        return password;
    }
};

int main(){
    userid zack(123);
    zack.username = "APNACOLLEGE";
    zack.setpassword("abcde");

    cout<<"USERNAME : "<<zack.username<<endl;
    cout<<"PASSWORD : "<<zack.getpass()<<endl;
    cout<<"ID : "<<zack.idreturn()<<endl;
    
    return 0;
}