#include<iostream>
#include<string>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> l;
    for(int i=0;i<n;i++){
        int t;
        std::cin >> t;
        l.push_back(t);
    }

    int ans_rev = 2, cnt = 0;
    while(true){
        if(ans_rev == n+1){
            break;
        }
        if(l[cnt] == 0){
            cnt += 1;
            ans_rev += 1;
            continue;
        }else{
            break;
        }
    }
    if(ans_rev == n+1){
        std::cout << 0 << std::endl;
        return 0;
    }
    cnt = n-1;
    while(true){
        if(ans_rev == n+1){
            break;
        }
        if(l[cnt] == 0){
            cnt -= 1;
            ans_rev += 1;
            continue;
        }else{
            break;
        }
    }

    std::cout << n - ans_rev + 1 << std::endl;

}