#include<iostream>

using std::cout;
using std::endl;

void xiaoming(){

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