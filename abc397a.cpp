#include<iostream>
#include<string>
#include<vector>

int main(){
    double x;
    std::cin >> x;
    if(x>=38.0){
        std::cout << 1;
    }else if(x<37.5){
        std::cout << 3;
    }else{
        std::cout << 2;
    }
}