#include<iostream>
#include<vector>
using namespace std;
/*
MECHANISM OF VECTORS : When we initilize an vector then 8 space array is created in a memory whose size is 0 but capacity is 8 and all fill with 0 when we push_back then that 0 is replaced by our value as the 9 value is entered more than array size then new array of double size is created with 16 spaces[capacity of 16] in cpp and first 8 are filled with previous values and remaining with new push_back values.

2) In C++, the capacity of a std::vector refers to the total number of elements that the vector can store without needing to reallocate its internal memory. This is distinct from the size, which represents the actual number of elements currently stored in the vector.
*/
int main(){
    vector<int> vec(5,7);
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    vec.pop_back();

    cout<<endl;

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }


    return 0;
}
/*
1) To overcome the problem of fixed and static size we use vectors.

2) If you are using vector then you are using an dynamic array.

3) Syntax : vector<data type> vector name;

4) If we didn't initilize the vector then it do not means it holds garbage value but its size is zero or it occupies no space in memory.

5) Use vectorname.push_back(n) to insert value in a vector.

6) Internally vectors are using array so how they are dynamic the answer is capacity. 

7) shrink_to_fit(): Requests that the vector reduce its capacity to match its size(). This can be useful to free up unused memory, but it's only a request and the implementation might not always fulfill it.
*/