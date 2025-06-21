#include<iostream>
#include<vector>
int main(){
    int n;
    std::cin >> n;
    std::vector<int> a = {};
    std::vector<int> ans = {};
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    int idx;
    for(int i=0;i<n;i++){
        int max;
        if(i==0){
            max=a[i];
            idx=i;
        }else{
            if(max<a[i]){
                idx=i;
                max=a[i];
            }
        }
    }
    int t=a[idx];
    a[idx]=a[n-1];
    a[n-1]=t;
    ans.push_back(a[n-1]);
    a.pop_back();
    for(int i=0;i<n-1;i++){
        int size=a.size();
        int max;
        for(int j=0;j<size;j++){
            if(j==0){
                max=a[j];
                idx=j;
            }else{
                max=a[j];
                idx=j;
            }
        }
        int num=ans.size();
        if(ans[num-1]<=a[idx]){
            int t=a[idx];
            a[idx]=a[size-1];
            a[size-1]=t;
            a.pop_back();
        }else{
            int t=a[idx];
            a[idx]=a[size-1];
            a[size-1]=t;
            ans.push_back(a[size-1]);
            a.pop_back();
        }
    }
    int answer=ans.size();
    std::cout << answer;
}