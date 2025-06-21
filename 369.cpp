#include<iostream>
#include<cmath>

int main(){
    int a,b;
    std::cin >> a >> b;
    int z=std::fabs(a-b);
    if(a==b){
        std::cout << 1;
    }else if(z%2==1){
        std::cout << 2;
    }else{
        std::cout << 3;
    }
}