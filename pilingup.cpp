#include<iostream>

int main(){
    int r;
    std::cin >> r;
    int ans;
    if(r<100){
        ans=100-r;
    }else if(r<200){
        ans=200-r;
    }else if(r<300){
        ans=300-r;
    }

    std::cout << ans;
}