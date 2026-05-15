#include<iostream>
#include<vector>
using namespace std;
    
int main(){
    // vector<int>vec = {1,2,3};
    // cout<<"SECOND INDEX OF A VECTOR : "<<vec[2]<<endl;
    
    // vector<int>vac (5,7);
    // for(int value: vac){
    //     cout<<"VALUE : "<<value<<endl;
    // }

    vector<int> arr;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(1);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.pop_back();
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    /*
    1. It takes linear time complexity of O(n) to delete old vector and crete new one and shift its values from one vector to another.
    */
    return 0;
}
// VECTORS : THEY ARE DYNAMIC ARRAY WHOSE SIZE CAN BE CHANGED UNLESS LIKE A ARRAY WHOSE SIZE CAN'T BE CHANGED,LIKE ARRAYS VECTOR ALSO HAVE CONTINUOUS MEMORY ALLOCATION.
    // FROM S.T.L [STANDARD TEMPLET LIBRARAY] WE CAN DIRECTLY IMPLEMENTS THE TOOLS OF DATA STRUCTURES.
    // SIZE OF A VECTOR CAN BE CHNAGED AFTER DECLARING THEM OR USING THEM.
    // SYNTAX OF VECTOR : vector<data type> name_of_a_vector;

    // ANOTHER WAY TO CREATE AN VECTOR : vector<data type>name (number of elemnts in a vector,value at each position);
    // WE CAN USE FOR EACH LOOP WHICH DIRECTLY STORES THE VALUE AT THAT INDEX OF VECTOR INTEAD OF STORING INDEX NUMBER.THE DATA TYPE OF VALUE IN FOR EACH LOOP AND VECTOR SHOLD BE SAME.