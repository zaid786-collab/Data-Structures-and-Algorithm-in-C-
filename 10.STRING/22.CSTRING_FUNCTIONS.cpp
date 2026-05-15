#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[30];
    strcpy(str1,"Hello World");
    cout<<str1<<endl;
    char str2[30];
    strcpy(str2,str1);
    cout<<str2<<endl;

    char str3[20] = "My name is ";
    char str4[20] = "Mohammad Zaid Khan";
    strcat(str3,str4);
    cout<<str3<<endl;
    cout<<str4<<endl;

    char str5[20] = "mango";
    char str6[2] = "x";
    cout<<strcmp(str5,str6)<<endl;
    return 0;
}
/*
1. Strcpy is used to copy string from one string to another. Syntax : strcpy(Final_String,Source_String).

2. Strcat is used concateate one string to another.Str1 to Str2 but Str2 will remain same.

3. Strcmp is used to compare one string to another if String 1 is smaller then String 2 then it will give -ve value if String 1 is larger then string 2 then it will give +ve value and if same then 0,it have nothing to do with length of an string.
*/