#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

long int combi(int a, int b){
    // std::cout << "a: " << a << " b: " << b << std::endl;
    long int c1 = 1, c2 = 1;
    for(int i=1;i<=b;i++){
        c1 *= a - (i-1);
        if(i <= b){
            c2 *= i;
        }
        
        if(c1 % c2 == 0){
            c1 = c1 / c2;
            c2 = 1;
        }
    }
    // for(int i=1;i<=b;i++){
    //     c2 *= i;
    // }
    // std::cout << "c1: " << c1 << " c2: " << c2 << std::endl;
    return c1 / c2;
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    std::map<int, int> map;
    for(int i=0;i<n;i++){
        int t;
        std::cin >> t;
        a.push_back(t);
        if(map.find(t) == map.end()){
            map[t] = 1;
        }else{
            map[t]++;
        }
    }

    long int ans = 0;

    for(auto val: map){
        if(val.second >= 2){
            //std::cout << val.second << " " << 2 << std::endl;
            ans += (int(a.size()) - val.second) * combi(val.second, 2);
            // std::cout << combi(val.second, 2) << std::endl;
        }
    }

    std::cout << ans << std::endl;


}
