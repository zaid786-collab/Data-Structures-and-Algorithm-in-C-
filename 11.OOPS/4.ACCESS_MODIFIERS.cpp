#include<bits/stdc++.h>
using namespace std;
class insta{
    // Private by default
    int id;

    public :
    string name;
    string userid;
    string password;
    string bio;

    void deactivate(){
        cout<<"ACCOUNT DEACTIVATED"<<endl;
    }
    void editbio(){
        cout<<"EDIT YOUR BIO"<<endl;
    }
};

int main(){
    insta zack;
    cin>>zack.id;

    return 0;
}

/*
1. Access modifiers are the keywords which decides where will the Properties and Functions of a Class are accessible.

2. By default all Properties and Functions are set to Private.

3. Private : Only accessed inside the class and friend functions.

4. Public : Can be accessed anywhere in a program.

5. Protected : Data and Methods are acceddible only inside a class and its derived class,that a slight difference between private and protected.
*/