#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
//わからんくなった
int main(){
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int t;
        std::cin >> t;
        a.push_back(t);
    }

    std::vector<long int> sum;
    long int s = 0;
    for(int i=0;i<n;i++){
        s += a[i];
        sum.push_back(s);
    }

    long int minus = 0;
    long int start_idx = 0;

    for(int i=0;i<q;i++){
        int num;
        std::cin >> num;
        if(num == 1){
            int c;
            std::cin >> c;
            for(int i=0;i<c;i++){
                if((start_idx+1)%n == 0){
                    minus = 0;
                }
                minus += sum[start_idx];
                int t = sum[start_idx];
                sum.push_back(t + sum[start_idx+n-1]);
                start_idx++;
                std::cout << "start_idx: " << start_idx << std::endl;
                for(int j=start_idx;j<start_idx+n;j++){
                    std::cout << sum[j] << " ";
                }
                std::cout << "minus: " << minus << std::endl;
            }
        }else{
            int l, r;
            std::cin >> l >> r;
            if(l == 1){
                std::cout << sum[start_idx+r-1] - minus << std::endl;
                continue;
            }
            //std::cout << "l:" << sum [l-2] << " r:" << sum[r-1] << std::endl;
            std::cout << sum[start_idx+r-1] - sum[start_idx+l-2] << std::endl;
        }
    }
}