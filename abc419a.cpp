#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main(){
    std::string s;
    std::cin >> s;
    if(s == "red"){
        std::cout << "SSS" << std::endl;
    }else if(s == "blue"){
        std::cout << "FFF" << std::endl;
    }else if(s == "green"){
        std::cout << "MMM" << std::endl;
    }else{
        std::cout << "Unknown" << std::endl;
    }
}