#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string x, y;
    std::cin >> y >> x;
    if(x == "Ocelot"){
        std::cout << "Yes" << std::endl;
    }else if(x == "Serval" && y != "Ocelot"){
        std::cout << "Yes" << std::endl;
    }else if (x == "Lynx" && y == "Lynx"){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }

    return 0;
}