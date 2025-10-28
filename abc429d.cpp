#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    long int n, m, c;
    std::cin >> n >> m >> c;
    std::vector<long int> a;
    std::vector<long int> b{m};
    for(int i=0;i<n;i++){
        long int t;
        std::cin >> t;
        a.push_back(t);
        b[t]++;
    }
    std::vector<long int> c;
    for(long int i=0;i<m;i++){
        
    }
    
}