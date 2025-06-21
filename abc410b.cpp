#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n,q;
    std::cin >> n >> q;
    std::vector<int> a;
    for(int i=0;i<q;i++){
        int t;
        std::cin >> t;
        a.push_back(t);
    }
    std::vector<int> b;
    for(int i=0;i<=n;i++){
        b.push_back(0);
    }
    for(int i=0;i<q;i++){
        if(a[i] >= 1){
            b[a[i]]++;
            std::cout << a[i] << " ";
        }else{
            int min = 500;
            for(int j=1;j<=n;j++){
                if(j == 0){
                    min = b[j];
                }else{
                    if(b[j] < min){
                        min = b[j];
                    }
                }
            }
            for(int j=1;j<=n;j++){
                if(b[j] == min){
                    std::cout << j << " ";
                    b[j]++;
                    break;
                }
            }
        }
    }
}