#include<iostream>

using std::cout;
using std::endl;

void xiaoming(){
    puts("Hello, I'm xiaoming!");
    puts("And I am the most handsome guy in the whole world!");
    return ;
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