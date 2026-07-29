#include<bits/stdc++.h>
using namespace std;

int prec(char ch) {
    if(ch == '^'){
        return 3;
    }
    else if(ch == '/' || ch == '*'){
        return 2;
    }
    else if(ch == '+' || ch == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

void InfixtoPostfix(string s) {
    stack<char> st;
    string result;

    int len = s.length();

    for(int i=0;i<len;i++) {
        char ch = s[i];

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            result += ch;
        
        else if (ch == '(')
            st.push('(');

        else if (ch == ')'){
            while(st.top() != '('){
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        else {
            while(!st.empty() && prec(ch) <= prec(st.top())){
                result += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

        while(!st.empty()) {
            result += st.top();
            st.pop();
        }
        cout << "Postfix Expression : "<<result<<endl;
}

int main () {
    string s = "(p+q)*(m-n)";
    cout << "Infix Expressions : " << s << endl;

    InfixtoPostfix(s);

    return 0;
}