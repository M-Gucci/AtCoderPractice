#include<iostream>
#include<vector>

int main(){
    int a,b,c;
    std::cin >> a >> b >> c;
    if(a==b || b==c || a==c){
        std::cout << "Yes";
    }else if(a+b==c || b+c==a || a+c==b){
        std::cout << "Yes";
    }else{
        std::cout << "No";
    }
}