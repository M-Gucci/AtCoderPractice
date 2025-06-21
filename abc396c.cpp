#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n,m;
    std::cin >> n >> m;
    std::vector<int> b;
    std::vector<int> w;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        b.push_back(tmp);
    }
    for(int i=0;i<m;i++){
        int tmp;
        std::cin >> tmp;
        w.push_back(tmp);
    }

    std::sort(b.begin(),b.end(),std::greater<int>{});
    std::sort(w.begin(),w.end(),std::greater<int>{});

    int cnt=0;
    int ans=0;
    while(true){
        if(cnt>=n){
            break;
        }

        if(b[cnt]>=0){
            ans+=b[cnt];
            cnt++;
            std::cout << 'b' << b[cnt-1] << std::endl;
        }else{
            break;
        }
    }
        

    int w_cnt=0;
    while(true){
        if(w_cnt>=n && w_cnt>=m){
            break;
        }

        if(cnt<=w_cnt){
            if(b[w_cnt]+w[w_cnt]>=0){
                ans+=b[w_cnt]+w[w_cnt];
                std::cout << 'b' << b[w_cnt] << 'w' << w[w_cnt] << std::endl;
                w_cnt++;
            }else{
                break;
            }
        }else{
            if(w[w_cnt]>=0){
                ans+=w[w_cnt];
                std::cout << 'w' << w[w_cnt] << std::endl;
                w_cnt++;
            }else{
                break;
            }
        }
    }

    std::cout << ans << std::endl;

}