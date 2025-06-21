#include<iostream>
#include<vector>
int main(){
    std::vector<int> s = {};
    int tmp,count=0;
    std::cin >> tmp;
    for(int i=0;i<3;i++){
        int tmp1=tmp%10;
        tmp/=10;
        s.push_back(tmp1);
    }
    for(int i=0;i<3;i++){
        if(s[i]==1){
            count++;
        }
    }
    std::cout << count;
}