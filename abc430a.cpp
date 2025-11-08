#include<iostream>
#include<vector>
#include<string>

int main(){
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if((a <= c && b <= d) || a > c){
        std::cout << "No" << std::endl;
    }else{
        std::cout << "Yes" << std::endl;
    }
    return 0;
}