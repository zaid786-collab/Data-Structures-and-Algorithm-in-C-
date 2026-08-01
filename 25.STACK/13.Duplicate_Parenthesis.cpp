// If there is no element or operator btw opening or closing parenthesis then it is a invalid or duplicate parenthesis else not.

// Approach : Push all Operators,Symbols and Opening Parenthesis in Stack,if closing Parenthesis is found then remove all the element until opening is not found and after removing them if next closing gets opening directly on top then it is duplicate else not. 

// Note : It is given that these string are Valid Parenthesis already.

#include<bits/stdc++.h>
using namespace std;

bool isduplicate(string m) {
    stack<int> st;

    int len = m.length();

    for(int i=0;i<len;i++){
        char ch = m[i];

        if(ch != ')'){
            st.push(ch);
        }

        else if(ch == ')'){
            if(st.top() == '('){
                return true;      // String is Duplicate.
            }

            while(st.top() != '('){
                st.pop();
            }
            st.pop();
        }
    }

    return false;               // String is Valid no Duplicate Parenthesis found.   
}

int main () {
    string s1 = "((a+b))";
    string s2 = "((a+b) + (c+d))";

    isduplicate(s1) ? cout << "Duplicate\n" : cout << "Not Duplicate\n";
    isduplicate(s2) ? cout << "Duplicate\n" : cout << "Not Duplicate\n";

    return 0;
}