#include<iostream>
using namespace std;
void sayhello(){
    cout<<"Hello World\n";
}
void saybye();

int main(){
    // Forward Decleration : 
    // Decleration : Function's name,return type, and parameters(if any).
    // Defination : The body of  the function.
    sayhello();

    // Compiler runs from top to bottom so function written below main will not be adentified so we made decleration above the main function for that function.
    saybye();
    return 0;
}

void saybye(){
    cout<<"Bye.\n";
}