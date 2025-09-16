#include<iostream>
#include<vector>

int main(){
    int x, y;
    std::cin >> x >> y;
    if(x+y <= 12){
        std::cout << x+y << std::endl;
    }else{
        std::cout << ((x+y)%13)+1 << std::endl;
    }
}