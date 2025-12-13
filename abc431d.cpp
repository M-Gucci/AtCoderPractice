#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> w;
    std::vector<int> h;
    std::vector<int> b;
    std::vector<int> c;
    for(int i=0;i<n;i++){
        int t1, t2, t3;
        std::cin >> t1 >> t2 >> t3;
        w.push_back(t1);
        h.push_back(t2);
        b.push_back(t3);
        c.push_back(0);
    }

    long long sum = 0, b_sum = 0, h_sum = 0;
    for(int i=0;i<n;i++){
        if(h[i] <= b[i]){
            sum += b[i];
            c[i] = 1;
            b_sum += w[i];
        }else{
            sum += h[i];
            c[i] = 2;
            h_sum += w[i];
        }
    }

    if(b_sum >= h_sum){
        std::cout << sum << std::endl;
        return 0;
    }

    int t_idx = 0;

    for(int i=0;i<n;i++){
        if(c[i] == 2){
            sum -= h[i];
            sum 
        }
    }
}