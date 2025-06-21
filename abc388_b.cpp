#include<iostream>
#include<string>
#include<vector>

int main(){
    int n,d;
    std::cin >> n >> d;
    std::vector<int> T;
    std::vector<int> L;
    for(int i=0;i<n;i++){
        int tmp1,tmp2;
        std::cin >> tmp1 >> tmp2;
        T.push_back(tmp1);
        L.push_back(tmp2);
    }

    for(int i=1;i<=d;i++){
        std::vector<int> T_t=T;
        std::vector<int> L_t=L;
        int q;
        int max;
        for(int j=0;j<n;j++){
            int t1=T_t[j];
            int t2=L_t[j]+i;
            //std::cout << t1 << " " << t2 << "\n";
            q=t1*t2;
            if(j==0){
                max=q;
            }else{
                if(max<q){
                    max=q;
                }
            }
            //std::cout << "max" << max << "\n";
        }
        std::cout << max << "\n";
    }
}