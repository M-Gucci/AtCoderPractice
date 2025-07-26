//わかりません

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

int main(){
    int t;
    std::cin >> t;
    for(int i=0;i<t;i++){
        long int ans = 0;
        long int n, m;
        std::cin >> n >> m;
        std::vector<int> a;
        std::vector<int> b;
        for(int j=0;j<n;j++){
            int x;
            std::cin >> x;
            a.push_back(x);
        }
        for(int j=0;j<n;j++){
            int x;
            std::cin >> x;
            b.push_back(x);
        }
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());
        for(int j=0;j<n;j++){
            int tmp1 = std::fabs(m - b[j]);
            auto iter = std::lower_bound(a.begin(), a.end(), tmp1);
            if(iter != a.end()){
                ans += b[j] + (*iter);
                a.erase(iter);
            }
        }
        std::cout << ans << std::endl;
    }
}