#include<iostream>
#include<vector>
#include<algorithm>
int ihan(std::vector<int> p){
    int n=p.size();
    for(int i=0;i<n;i++){

    }
}
int main(){
    int t;
    std::cin >> t;

    for(int i=0;i<t;i++){
        int n;
        std::cin >> n;
        std::vector<int> p={0};
        for(int i=0;i<n;i++){
            int tmp;
            std::cin >> tmp;
            p.push_back(tmp);
        }
        int cnt=0;
        while(true){
            std::vector<int> t_p=p;
            for(int k=1;k<=n;k++){
                if(2<=k){
                    std::sort(t_p.begin(),t_p.begin()+k);
                }
                if(k<=n-1){
                    std::sort(t_p.begin()+(k),t_p.end());
                }
            }
        }
    }
}