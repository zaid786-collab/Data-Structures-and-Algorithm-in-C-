#include<iostream>
using namespace std;
int main(){
    string x = "HELLO";
    cout<<"LENGTH OF A STRING IS : "<<x.length();
    // ORIGNAL SIZE OF ABOVE STRING IS 6 BC THERE IS A PERMANENT NULL CHARECTER(\0)[ASCII VALUE 0] AT THE END OF A STRING,WE CANNOT PRINT IT AS AN OUTPUT.IT MARKS THE END OF A STRING.
    char ch = '\0';
    cout<<"\nASCII VALUE OF NULL : "<<int(ch);
    return 0;
}