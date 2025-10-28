#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main(){
    int n, m;
    std::cin >> n >> m;
    for(int i=1;i<=n;i++){
        if(i <= m){
            std::cout << "OK" << std::endl;
        }else{
            std::cout << "Too Many Requests" << std::endl;
        }
    }

    return 0;
}