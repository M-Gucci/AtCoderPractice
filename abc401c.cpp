#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<array>
#include<numeric>
#include<queue>


int main(){
    long int n,k;
    std::cin >> n >> k;

    std::vector<long int> a;
    long int t_sum=0;
    for(int i=0;i<k;i++){
        a.push_back(1);
        t_sum+=1;
    }

    std::queue<long int> b;
    for(int i=0;i<k;i++){
        b.push(1);

    }

    for(int i=k;i<=n;i++){
        long int tmp=t_sum;
        if(tmp>1000000000){
            tmp=tmp%1000000000;
        }
        a.push_back(tmp);
        //std::cout << tmp << std::endl;
        t_sum-=a[i-k];
        t_sum+=a[i];
    }

    std::cout << a[n]%1000000000 << std::endl;
    return 0;
}