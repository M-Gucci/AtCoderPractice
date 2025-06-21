#include<iostream>
#include<vector>
#include<string>

int main(){
    int a,b;
    std::cin >> a;
    if(400%a==0){
        b=400/a;
        std::cout << b;
        return 0;
    }else{
        std::cout << -1;
        return 0;
    }
}