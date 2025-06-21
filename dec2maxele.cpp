#include<iostream>
#include<vector>
#include<algorithm>

void swap(std::vector<int>& a){
    int n=a.size();
    std::vector<int> b;
    for(int i=n-1;i>=0;i--){
        b.push_back(a[i]);
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    int cnt=0;
    int z=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            z++;
        }
    }
    if(z<=1){
        std::cout << cnt;
        return 0;
    }
    while(true){
        cnt++;
        std::sort(a.begin(),a.end());
        swap(a);
        a[0]--;
        a[1]--;
        int z=0;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                z++;
            }
        }
        if(z<=1){
            std::cout << cnt;
            return 0;
        }
    }
}