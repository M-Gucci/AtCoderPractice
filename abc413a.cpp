#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main(){
    int n,m;
    std::cin >> n >> m;
    std::vector<int> a;
    int sum = 0;
    for(int i=0;i<n;i++){
        int t;
        std::cin >> t;
        sum+=t;
    }

    if(sum<=m){
        std::cout << "Yes\n";
    }else{
        std::cout << "No\n";
    }


    
}