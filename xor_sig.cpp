#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    int sum=0;
    int t_sum=a[0];
    int cnt=0;
    for(int i=1;i<n;i++){
        t_sum=t_sum^a[i];
        sum+=t_sum;
        cnt++;
    }
    for(int i=0;i<n-2;i++){
        t_sum=t_sum^a[i];
        sum+=t_sum;
        cnt++;
    }
    std::cout << sum;
}