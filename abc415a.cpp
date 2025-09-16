#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int t;
        std::cin >> t;
        a.push_back(t);
    }
    
    int x;
    std::cin >> x;

    for(int i=0;i<n;i++){
        if(a[i] == x){
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "No" << std::endl;
    return 0;

}