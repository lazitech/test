#include<iostream>

using std::cout;
using std::endl;

void xiaoming(){
    // hello, xiaoming, do you finish your work?
}

void xiaohong(){
    std::string s = "Hello, my name is xiaohong.";
    for(auto x:s)   
        cout<<x;
    cout<<endl;
    return ;
}


int main(){
    xiaoming();
    xiaohong();
}