#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter number of rows in a rectangle : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<"* ";
    //     for(int j=1;j<=n-1;j++){
    //         if(i==1 || i==n){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<"* "<<endl;
    // }

    int n;
    cout<<"Enter number of rows in a rectangle : ";
    cin>>n;
    int m;
    cout<<"Enter number of colomns in a rectangle : ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || i==n || j==1 || j==m){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}