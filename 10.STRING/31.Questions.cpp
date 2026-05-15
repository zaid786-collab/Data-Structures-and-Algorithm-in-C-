#include<bits/stdc++.h>
using namespace std;
int main(){
    // char f_name[20];
    // char l_name[20];
    // char full_name[50];
    // cout<<"Enter your first name : ";
    // cin>>f_name;
    // cout<<"Enter your last name : ";
    // cin>>l_name;
    // cout<<"Hi "<<f_name<<" ! Your first name has "<<strlen(f_name)<<" charecters."<<endl<<"And your last name has "<<strlen(l_name)<<" charecters."<<endl;
    // strcpy(full_name,f_name);
    // strcat(full_name," ");
    // strcat(full_name,l_name);
    // if(strcmp(f_name,l_name)==0){
    //     cout<<"Both Strings are Equal"<<endl;
    // }
    // else{
    //     cout<<"Both Strings are not Equal"<<endl;
    // }


    // string str;
    // getline(cin,str);
    // cout<<"You Entered : "<<str<<endl;

    // string str1 = "hello";
    // string str2 = "Joy";
    // string str3 = str2;
    // string str4 (5,'z');
    // cout<<str1<<endl<<str2<<endl<<str3<<endl<<str4;

    // string str1 = "hello";
    // string str2 {str1,3};
    // string str3 {"Dipika",3};
    // cout<<str1<<endl<<str2<<endl<<str3;

    // string str1 = "Welcome Home Zaid";
    // cout<<str1[9]<<endl;
    // cout<<str1.at(9)<<endl;
    // cout<<str1<<endl;
    // str1 += " khan";
    // cout<<str1;

    // string str1 = "Welcome";
    // string str2 = "Home";
    // cout<<str1+str2<<endl;
    // cout<<str1.append(str2)<<endl;
    // // cout<<str1.insert(str2)<<endl;
    // cout<<str1+" "+str2+" "+" Zaid"<<endl;
    // cout<<"Length of str1 : "<<str1.length();

    // string str1 = "Welcome";
    // string str2 = "Home";
    // if((str1.compare(str2)) == 0){
    //     cout<<"String Matched"<<endl;
    // }
    // else{
    //     cout<<"String Not Matched"<<endl;
    // }

    // string str1 = "Welcome Home";
    // cout<<str1.substr(8,4)<<endl;

    // string str = "Hi! Welcome Home, Joy.Hi";
    // cout<<str.find("Jo")<<endl;
    // cout<<str.find("Hi")<<endl;
    // cout<<str.rfind("Hi")<<endl;

    // string s = "Hi! Welcome Home";
    // string z = "I am Zaid ";
    // cout<<s.insert(4,"Zaid ")<<endl;
    // cout<<s.insert(4,z)<<endl;
    // cout<<s.insert(21,".What will you have?",4,5);

    // string str1 = "Hey World";
    // cout<<str1.length()<<endl;
    // string str2 = "Hello";
    // str1.replace(0,3,str2);
    // cout<<str1.length()<<endl;
    // cout<<str1<<endl;

    string str = "Hello,i World";
    str.erase(5,2);
    cout<<str;

    return 0;
}