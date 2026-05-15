#include<bits/stdc++.h>
using namespace std;
class insta{
    public :
    string name;
    string userid;
    string password;
    string bio;

    // Methods
    void deactivate(){
        cout<<"ACCOUNT DEACTIVATED"<<endl;
    }
    void editbio(){
        cout<<"EDIT YOUR BIO"<<endl;
    }
};
int main(){
    insta zaid;
    cin>>zaid.name;
    cin>>zaid.userid;
    cin>>zaid.password;

    cout<<zaid.name<<endl;
    cout<<zaid.userid<<endl;
    cout<<zaid.password<<endl;
    zaid.bio = "Coder";
    cout<<zaid.bio<<endl;

    zaid.deactivate();
    return 0;
}