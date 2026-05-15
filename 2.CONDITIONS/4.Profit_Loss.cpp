#include<iostream>
using namespace std;
int main(){
    int sp,cp,calculate,profit,loss;
    cout<<"Enter the cost price of an item in ruppes : ";
    cin>>cp;
    cout<<"\nEnter the selling price of an item in ruppes : ";
    cin>>sp;
    calculate = sp - cp;
    if(sp>cp){
        profit = calculate;
        cout<<"\nSeller makes an profit of : "<<profit<<" ruppes.";
    }
    else if(sp==cp){
        cout<<"\nSeller makes neither an profit nor a loss.";
    }
    else{
        loss = calculate;
        cout<<"\nSeller makes an loss of : "<<loss<<" ruppes.";
    }


    return 0;
}