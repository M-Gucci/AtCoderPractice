#include<iostream>
#include<vector>
#include<string>

int main(){
    int n;
    std::vector<int> p;
    std::cin >> n;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        p.push_back(tmp);
    }

    int r=1;
    std::vector<int> rank;
    for(int i=0;i<n;i++){
        rank.push_back(0);
    }

    while(r<=n){
        int max=0;
        for(int i=0;i<n;i++){
            if(max<p[i]){
                max=p[i];
            }
        }
        //std::cout << "max" << max << std::endl;
        int t_cnt=0;
        for(int i=0;i<n;i++){
            if(p[i]==max){
                rank[i]=r;
                t_cnt++;
                p[i]=-1;
            }
        }
        r+=t_cnt;
    }

    for(int i=0;i<n;i++){
        std::cout << rank[i] << std::endl;
    }


}