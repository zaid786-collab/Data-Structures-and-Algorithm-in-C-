#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "I love coding in c++ and java,but not oops in c++.";

    cout<<s.length()<<endl;
    cout<<s.at(2)<<endl;

    cout<<"SUB STRING IS : "<<endl;
    cout<<s.substr(1,4)<<endl;     // substr(starting_index,size_of_string).

    cout<<"FINDING INDEX : "<<endl;
    cout<<s.find("c++")<<endl;    // gives the starting index of word in a string returning its 1st occurance.
    int x = s.find("python");
    cout<<x<<endl;  // gives -1 as python word not exist in a string

    cout<<"TO CHECK FOR OTHER OCCURANCES : "<<endl;
    cout<<s.find("c++",20)<<endl;    // gives the 1st index of word c++ in string after 20th index.
    return 0;
}