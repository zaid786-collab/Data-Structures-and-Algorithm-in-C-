#include<iostream>
using namespace std;
int main(){
    int l,b,area,perimeter;
    cout<<"Enter the length of a rectangle in(cm): ";
    cin>>l;
    cout<<"Enter the breadth of a rectangle in(cm): ";
    cin>>b;
    perimeter = 2*(l+b);
    area = l*b;
    if(perimeter>area){
        cout<<"Perimeter is more than area.";
    }
    else{
        cout<<"Area is more than perimeter.";
    }

    return 0;
}