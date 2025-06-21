#include<iostream>
#include<vector>

int main(){
    int n,k;
    std::cin >> n >> k;
    std::vector<int> a = {};
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    int cnt=0,ans=0;
    int kk=k;
    
    while(true){
        if(cnt==n-1 && a[n-1]>kk){
            ans+=2;
            break;
        }else if(cnt==n-1){
            ans++;
            break;
        }

        if(kk>=a[cnt]){
            kk=kk-a[cnt];
            cnt++;
        }else{
            ans++;
            kk=k;
        }
        
    }

    std::cout << ans;
    
}