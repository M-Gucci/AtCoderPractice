#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a;
    long int sum = 0;
    for(int i=0;i<n;i++){
        int t;
        std::cin >> t;
        a.push_back(t);
        sum += t;
    }

    for(int i=0;i<n;i++){
        long int jug = sum - a[i];
        if(jug == m){
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}