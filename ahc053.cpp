#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<cmath>

int main(){
    long int n, m, l, u;
    std::vector<long int> a;
    std::cin >> n >> m >> l >> u;

    // long int card_num = u/2;

    long int step = (u-l)/n; 
    long int card_num = l;

    for(long int i=0;i<n;i++){
        std::cout << card_num << " ";
        a.push_back(card_num);
        card_num += step; 
        if(card_num > u){
            card_num = u;
        }
    }

    std::cout << std::endl;

    std::vector<long int> b;
    std::vector<long int> ans_idx(n, 0);

    for(long int i=0;i<m;i++){
        long int t;
        std::cin >> t;
        b.push_back(t);
    }

    long int sum = 0, idx = 0, flag = 0, max_idx = a.size()-1;
    while(true){
        // if(flag == 1){
        //     std::cout << 0 << " ";
        //     continue;
        // }
        // sum += a[i];
        // std::cout << idx << " ";
        // if(sum >= b[idx]){
        //     sum = 0;
        //     idx += 1;
        // } 
        // if(idx > m){
        //     flag = 1;
        // }
        if(idx == m){
            break;
        }
        for(long int j=0;j<int(a.size());j++){
            if(a[j] >= b[idx] - sum && a[j] != -1){
                // std::cout << "in!" << " ";
                ans_idx[j] = idx+1;
                idx += 1;
                sum = 0;
                flag = 1;
                a[j] = -1;
                break;
            }
        }

        if(flag == 0){
            ans_idx[max_idx] = idx+1;
            sum += a[max_idx];
            a[max_idx] = -1;
            max_idx -= 1;
        }else{
            flag = 0;
        }
    }

    for(long int i=0;i<n;i++){
        std::cout << ans_idx[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}