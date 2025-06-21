#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

int a[10][10];


int main(){
    int n,m;
    std::cin >> n >> m;

    std::vector<int> k;

    for(int i=1;i<=m;i++){
        int t;
        std::cin >> t;
        k.push_back(t);
        for(int j=1;j<=t;j++){
            int t_a;
            std::cin >> t_a;
            a[i][j] =t_a;
        }
    }

    std::vector<int> b;

    for(int i=0;i<n;i++){
        int t;
        std::cin >> t;
        b.push_back(t);
    }

    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=m;j++){
            int flag=1;
            for(int z=1;z<k[1];z++){
                if(a[j][z]==0){
                    continue;
                }else if(a[j][z]==b[i]){
                    a[j][z]=0;
                }else{
                    flag=0;
                }
            }
            if(flag==1){
                cnt++;
            }
        }
        std::cout << cnt << std::endl;
    }
}