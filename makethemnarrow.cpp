#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

int main(){
    int n,k;
    std::cin >> n >> k;
    std::vector<int> a={};
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    int t_q;

    for(int i=0;i<=k;i++){
        for(int j=0;j<i;j++){
            a.erase(a.end());
        }
        for(int j=0;j<k-i;j++){
            a.erase(a.begin());
        }
        for(int &r : a){
            std::cout << r;
        }
        int t_max=0,t_min=-1;
        for(int &r : a){
            if(t_min==-1){
                t_min=r;
            }else{
                if(t_min>r){
                    t_min=r;
                }
            }
            if(t_max==0){
                t_max=r;
            }else{
                if(t_max<r){
                    t_max=r;
                }
            }
        }
        if(i==0){
            t_q=t_max-t_min;
        }else{
            if(t_q>(t_max-t_min)){
                t_q=t_max-t_min;
            }
        }
    }
    std::cout << t_q;

}