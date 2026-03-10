#include<iostream>

using std::cout;
using std::endl;

void xiaoming(){
    puts("Hello, I'm xiaoming!");
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
    return 0;
}