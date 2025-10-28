#include<iostream>
#include<string>
#include<vector>

int main(){
    int s, a, b, x;
    std::cin >> s >> a >> b >> x;

    int length = 0;
    for(int i=0;i<x;i++){
        if(i % (a+b) <= a-1){
            length += s;
            //std::cout << "i" << i << " " << length << std::endl;
        }else{
            continue;
        }
    }

    std::cout << length << std::endl;
}