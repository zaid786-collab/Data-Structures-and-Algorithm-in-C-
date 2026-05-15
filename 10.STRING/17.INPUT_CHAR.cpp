#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[30];
    cin>>arr;
    cout<<"Your word was : "<<arr<<endl;
    cout<<"Length of your word is : "<<strlen(arr);


    char sentence[50];
    cin.getline(sentence,50,'.');
    cout<<"Your word was : "<<sentence<<endl;
    cout<<"Length of your word is : "<<strlen(sentence);
    return 0;
}

/*
1. In case of normal Input from cin,the input statement terminates as it hits the blank or whitespace in a sentence thats why we use getline() which only terminates on next line.

2. cin.getline(string_name,size,'termination condition').
*/