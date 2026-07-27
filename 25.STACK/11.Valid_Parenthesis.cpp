#include<bits/stdc++.h>
using namespace std;

// T.C : O(n) and S.C : O(n)

void valid (string m) {
    stack<int> s;
    int len = m.length();

    for(int i=0;i<len;i++){
        char ch = m[i];

        // Pushing opening braces to our stack :
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        }

        // for closing brackets : 
        else {
            if(s.empty()){   // In case of opening brackets are less in number or not exist.
                cout << "Invalid String\n";
                return;
            }

            // Match found : 
            int top = s.top();
            if((top == '(' && ch == ')') || (top == '[' && ch == ']') || (top == '{' && ch == '}')){
                s.pop();
            }

            // If opening and closing braces are not in same order then invalid.
            else{      
                cout << "Invalid String\n";
                return;
            }
        }
    }

    // If number of closing brackets are less and opening are more then stack will not get empty which means invalid.
    if(!s.empty()) {
        cout << "Invalid String\n";
        return;
    }
    else {
        cout << "Valid String\n";
        return;
    }
}

int main () {
    string m = "([{}])";

    valid(m);
    return 0;
}