#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>

int main(){
    int x, c;
    std::cin >> x >> c;

    long int ans = 0;
    while(true){
        int tmp = ans + ans*(c/1000.0);
        // std::cout << tmp << " " << x << std::endl;
        if(tmp > x){
            std::cout << ans-1000 << std::endl;
            return 0;
        }
        ans += 1000;
    }
}