#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
int main(){
    int n;
    std::cin >> n;
    std::vector<int> a1;
    std::vector<int> a2;
    std::vector<std::string> s;
    for(int i=0;i<n;i++){
        int tmp1;
        std::string tmp2;
        std::cin >> tmp1;
        std::cin >> tmp2;
        if(tmp2=="L"){
            a1.push_back(tmp1);
        }else{
            a2.push_back(tmp1);
        }
        s.push_back(tmp2);
    }

    int size1=a1.size();
    int size2=a2.size();
    int cnt1=0;
    int cnt2=0;

    for(int i=1;i<size1;i++){
        cnt1+=std::fabs(a1[i]-a1[i-1]);
    }
    for(int i=1;i<size2;i++){
        cnt2+=std::fabs(a2[i]-a2[i-1]);
    }

    int cnt=cnt1+cnt2;

    std::cout << cnt;
}