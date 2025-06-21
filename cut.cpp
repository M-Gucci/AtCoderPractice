#include<iostream>
#include<vector>

int main(){
    int n,k;
    std::cin >> n >> k;
    std::vector<int> a;
    a.push_back(-1);
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    std::vector<int> b;
    int x=n-k+1;
    for(int i=0;i<k;i++){
        b.push_back(a[x]);
        x++;
    }
    for(int i=1;i<=n-k;i++){
        b.push_back(a[i]);
    }

    for(int i=0;i<n;i++){
        std::cout << b[i] << " ";
    }

}