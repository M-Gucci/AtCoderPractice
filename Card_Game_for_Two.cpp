#include<iostream>
#include<vector>
int main(){
    int n,count=1;
    std::vector<int> a={};
    std::cin >> n;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    int a_sum=0,b_sum=0;
    for(int i=n-1;i>=0;i--){
        int max,idx;
        for(int j=0;j<=i;j++){
            if(j==0){
                max=a[j];
                idx=j;
            }else{
                if(max<a[j]){
                    max=a[j];
                    idx=j;
                }
            }
        }
        int t=a[idx];
        a[idx]=a[i];
        a[i]=t;
        if(count%2==1){
            a_sum+=a[i];
        }else{
            b_sum+=a[i];
        }
        a.pop_back();
        count++;
    }
    int num=a.size();
    std::cout << a_sum-b_sum; // << " " << a_sum << " " << b_sum << " " << num;
}