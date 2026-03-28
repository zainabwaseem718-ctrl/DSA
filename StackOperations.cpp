#include<iostream>
using namespace std;
/*Stack = LIFO (Last In First Out)

Last jo andar gaya → Top ban gaya
Sab se pehle wahi bahar aayega*/
class stack{

    int arr[5];
    int top;
public:
stack(){
    top=-1;
}

void push(int x){
    if(top==4){//4 means stack full ha bcz size 5 ha index 4 han
        cout<<"Stack Overflow\n";
    }
    else{
        top++;
        arr[top]=x;
    }
}

void pop(){
    if(top==-1){
        cout<<"Stak Underflow\n";
    }
else{
    top--;

}
}

void peek(){
if(top==-1){
    cout<<"Stack is Empty\n";
}
else{
    cout<<"Top element : "<<arr[top]<<endl;
}
}
};
int main(){
    stack s;
    //push only insert values not print it
    s.push(10);
    s.push(20);
    s.push(50);
    s.push(30);
    s.push(40);//jo last py dala wo pehlay remove ho ga
    s.peek();//print top element
    s.pop();//remove top
    s.peek();//again print top means last element in stack
}
   