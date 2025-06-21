#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>

int main(){
    int s;
    std::cin >> s;
    if(s>=200 && s<=299){
        std::cout << "Success";
        return 0;
    }else{
        std::cout << "Failure";
        return 0;
    }
}