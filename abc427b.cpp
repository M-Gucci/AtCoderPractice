#include<iostream>
#include<string>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    int ans = 1;
    for(int i=1;i<n;i++){
        int t = ans;
        while(t>0){
            // std::cout << "t: " << t << std::endl;
            ans += t%10;
            t /= 10;
        }
    }

    std::cout << ans << std::endl;
}