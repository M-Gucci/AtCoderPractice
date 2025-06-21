#include<iostream>
#include<vector>
int main(){
    int n;
    std::cin >> n;
    std::vector<int> a = {};
    
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    int max,flag=0,idx=0;

    for(int i=0;i<n;i++){
        if(i==0){
            max=a[i];
        }else{
            if(max<a[i]){
                flag=1;
                idx=i;
                break;
            }
        }
    }
    if(flag==1){
        std::cout << idx+1;
    }else{
        std::cout << -1;
    }
}