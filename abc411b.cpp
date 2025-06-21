#include<iostream>
#include<vector>
#include<string>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> d;
    for(int i=0;i<n-1;i++){
        int t;
        std::cin >> t;
        d.push_back(t);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-1;j++){
            int t_leng = 0;
            for(int k=i;k<=j;k++){
                t_leng+=d[k];
            }
            std::cout << t_leng << " ";
        }
        std::cout << std::endl;
    }
}