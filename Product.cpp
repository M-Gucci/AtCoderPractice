#include<iostream>
int main(){
    int a,b;
    std::cin >> a >> b;
    int c=a*b;
    if(c%2==0){
        std::cout << "Even";
    }else{
        std::cout << "Odd";
    }
}