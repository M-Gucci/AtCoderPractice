#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    int h, b;
    std::cin >> h >> b;
    int tmp = h - b;
    if(tmp < 0){
        tmp = 0;
    }

    std::cout << tmp << std::endl;
}