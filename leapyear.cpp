#include<iostream>
int main(){
    int y;
    std::cin >> y;
    if(y%4!=0){
        std::cout << 365;
    }else if(y%4==0 && y%100!=0){
        std::cout << 366;
    }else if(y%100==0 && y%400!=0){
        std::cout << 365;
    }else if(y%400==0){
        std::cout << 366;
    }
}