#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<queue>
#include<utility>

int main(){
    long int q;
    std::cin >> q;
    
    std::queue<std::pair<long int,long int>> a;
    for(long int i=0;i<q;i++){
        long int n;
        std::cin >> n;
        if(n == 1){
            long int x, c;
            std::cin >> c >> x;
            a.push({x,c});
        }else{
            long int k;
            long int sum = 0;
            std::cin >> k;
            while(true){
                if(k<(a.front()).second){
                    (a.front()).second -= k;
                    long int tt = (a.front()).first * k;
                    sum += tt;
                    std::cout << sum << "\n";
                    break;
                }else if(k == (a.front()).second){
                    long int tt = (a.front()).first * k;
                    a.pop();
                    sum += tt;
                    std::cout << sum << "\n";
                    break;
                }else{
                    k -= (a.front()).second;
                    long int tt = (a.front()).first * (a.front()).second;
                    sum += tt;
                    //std::cout << (a.front()).first << " " << (a.front()).second << "\n";
                    a.pop();
                    //std::cout << "t sum: " << sum << " ";
                }
            }
        }
    }
}