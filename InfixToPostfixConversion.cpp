#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

class infixtopostfix{
public:

int checkprecedence(char op){
    if(op=='^') return 3;
    if(op=='*'||op=='/') return 2;
    if(op=='+'||op=='-') return 1;
    return 0;
}

void convert(string exp){
    stack<char> s;
    string result="";

    for(int i=0;i<exp.length();i++){
        char c=exp[i];

        // operand
        if(isalnum(c)){
            result += c;
        }

        // opening bracket
        else if(c=='('){
            s.push(c);
        }

        // closing bracket
        else if(c==')'){
            while(!s.empty() && s.top()!='('){
                result+=s.top();
                s.pop();
            }
            s.pop(); // remove '('
        }

        // operator
        else{
            while(!s.empty() && checkprecedence(s.top()) >= checkprecedence(c)){
                result+=s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // remaining stack
    while(!s.empty()){
        result+=s.top();
        s.pop();
    }

    cout << "Postfix Expression: " << result << endl;
}
};

int main(){
    string exp;

    cout << "Enter Infix Expression: ";
    cin >> exp;

    infixtopostfix obj;
    obj.convert(exp);

    return 0;
}