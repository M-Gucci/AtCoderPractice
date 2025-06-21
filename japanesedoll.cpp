#include<iostream>
#include<vector>
#include<string>


int main(){
    int n,t,p;
    std::cin >> n >> t >> p;
    std::vector<int> hair;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        hair.push_back(tmp);
    }

    int cnt=0,h_cnt=0;
    while(true){
        for(int i=0;i<n;i++){
            if(hair[i]>=t){
                h_cnt++;
            }
        }
        if(h_cnt>=p){
            std::cout << cnt;
            return 0;
        }
        h_cnt=0;

        for(int i=0;i<n;i++){
            hair[i]++;
        }
        cnt++;
    }
}