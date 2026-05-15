#include<iostream>
using namespace std;

class pearson {
    char name[25];
    int age;
    char course[20];

    public:
        void getdata(void);
        void display(void);
};

void pearson::getdata(void){
    cout<<"ENTER YOUR NAME WITHOUT SPACES : ";
    cin>>name;
    cout<<"ENTER YOUR AGE : ";
    cin>>age;
    cout<<"ENTER YOUR COURSE NAME : ";
    cin>>course;
}

void pearson::display(void){
    cout<<"NAME : "<<name<<"\n";
    cout<<"AGE : "<<age<<endl;
    cout<<"COURSE : "<<course<<endl;
}

int main(){
    pearson p;
    p.getdata();
    p.display();
    return 0;
}