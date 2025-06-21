#include<iostream>
#include<vector>
int main(){
    int n,count=0,flag=1;
    std::vector<int> a = {};
    std::cin >> n;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    while(true){
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                flag=0;
                break;
            }
        }
        if(flag==0){
            break;
        }
        count++;
        for(int i=0;i<n;i++){
            a[i]/=2;
        }
    }
    std::cout << count;
}