#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1  = "Hello";
    string str2 = "World";
    cout<<str1+str2<<endl;
    cout<<(str1<str2)<<endl;

    str2 = " Zaid";
    cout<<str1+str2<<endl;
    
    string s;
    getline(cin,s,'.');
    cout<<s<<endl;
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;

    for(char ch : s){
        cout<<ch<<" ";
    }

    return 0;
}
/*
1. C++ Strings are objects of pre-defined string class in STL.

2. C++ Strings have useful member functions.

3. C++ Strings are dynamics(their size can change at run time) while size of an character array is static.

4. C++ Strings support opeartors like +,==,>,< etc. instead of using strcmp we can just use <.

5. C++ strings are stored contiguously in memory,same like array.

6. String is an object but char array is not so we cannot use strcpy(),strcmp(),strcat() for strings.

7. For Strings getline work as : getline(cin,s,'.'), but for char array it works like char sentence[50];
    cin.getline(sentence,50,'.').
*/
