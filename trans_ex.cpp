#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    long long n;
    long long m;
    std::cin >> n >> m;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        long long tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    int x=m/n;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum<=m){
        std::cout << "infinite";
        return 0;
    }
    int x1;
    while(true){
        x+=100000000;
        long int t_sum=0;
        for(int i=0;i<n;i++){
            t_sum+=std::min(x,a[i]);
        }
        if(t_sum>m){
            x1=x-10000000;
            break;
        }
    }
    int x2;
    while(true){
        x1+=100000;
        long int t_sum=0;
        for(int i=0;i<n;i++){
            t_sum+=std::min(x,a[i]);
        }
        if(t_sum>m){
            x2=x1-100000;
            break;
        }

    }
    int x3;
    while(true){
        x2+=1000;
        long int t_sum=0;
        for(int i=0;i<n;i++){
            t_sum+=std::min(x,a[i]);
        }
        if(t_sum>m){
            x3=x2-1000;
            break;
        }

    }
    int x4;
    while(true){
        x3+=1000;
        long int t_sum=0;
        for(int i=0;i<n;i++){
            t_sum+=std::min(x,a[i]);
        }
        if(t_sum>m){
            x4=x3-1000;
            break;
        }

    }
    int ax;
    while(true){
        x4+=1;
        long int t_sum=0;
        for(int i=0;i<n;i++){
            t_sum+=std::min(x,a[i]);
        }
        if(t_sum>m){
            ax=x4;
            std::cout << ax-1;
            return 0;
        }

    }
}