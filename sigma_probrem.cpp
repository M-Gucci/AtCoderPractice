#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a = {};
    a.push_back(0);
    for(int i=0;i<n;i++){
        int z;
        std::cin >> z;
        a.push_back(z);
    }
    unsigned int sum=0;
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            //std::cout << i << " " << j << '\n';
            sum+=(a[i]+a[j])%(10*10*10*10*10*10*10*10);
        }
    }

    std::cout << sum;
}