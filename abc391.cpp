#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string s;
    std::cin >> s;
    if(s=="N"){
        std::cout << "S"; 
    }
    else if(s=="E"){
        std::cout << "W";
    }
    else if(s=="W"){
        std::cout << "E";
    }
    else if(s=="S"){
        std::cout << "N";
    }
    else if(s=="NE"){
        std::cout << "SW";
    }
    else if(s=="NW"){
        std::cout << "SE";
    }
    else if(s=="SE"){
        std::cout << "NW";
    }
    else{
        std::cout << "NE";
    }
}