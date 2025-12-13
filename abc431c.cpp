#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<int> h;
    std::vector<int> b;
    std::vector<int> b_c;
    for(int i=0;i<n;i++){
        int t;
        std::cin >> t;
        h.push_back(t);
    } 
    for(int i=0;i<m;i++){
        int t;
        std::cin >> t;
        b.push_back(t);
        b_c.push_back(0);
    }
    std::sort(h.begin(), h.end());
    std::sort(b.begin(), b.end());
    int cnt = 0, idx = 0;
    for(int i=0;i<n;i++){
        int key = h[i];
        int flag = 0;
        while(idx < m){
            if(b[idx] >= key){
                cnt++;
                idx++;
                flag = 1;
                break;
            }else{
                idx++;
            }
        }
        if(flag == 0){
            break;
        }
        if(cnt >= k){
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}