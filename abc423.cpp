#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

int main(){
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a;
    std::vector<int> b;
    std::vector<int> c;
    std::vector<std::pair<int, int>> time;
    for(int i=0;i<n;i++){
        int t1, t2, t3;
        std::cin >> t1 >> t2 >> t3;
        a.push_back(t1);
        b.push_back(t2);
        c.push_back(t3);
        time.push_back({t1, t1+t2});
    }
    long int in = 0;
    long int time_cnt = 0;
    int idx = 0;
    while(true){
        if(a[idx] == time_cnt){
            in += c[idx];
            idx += 1;
            
        }
    }


    
    
}