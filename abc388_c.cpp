#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    long ans=0;
    for(int i=0;i<n;i++){
        int key=a[i]*2;
        auto iter=std::lower_bound(a.begin(),a.end(),key);
        int t_ans=n-(iter-a.begin());
        if(t_ans==0){
            break;
        }
        //std::cout << "t" << *iter << "\n";
        //std::cout << a[i] << "\n";
        //std::cout << "t_ans" << t_ans << "\n";
        ans+=t_ans;
    }

    std::cout << ans << "\n";
}