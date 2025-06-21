
#include <bits/stdc++.h>
int main(){
    std::cout << std::fixed << std::setprecision(20);
    int n;
    std::cin >> n;
    std::vector<long double> x;
    std::vector<long double> y;
    for(int i=0;i<n;i++){
        long double tmpx,tmpy;
        std::cin >> tmpx >> tmpy;
        x.push_back(tmpx);
        y.push_back(tmpy);
    }
    long double ans=0.0;
    ans+=std::sqrt((x[0]*x[0])+(y[0]*y[0]));
    for(int i=1;i<n;i++){
        long double t=std::sqrt((x[i-1]-x[i])*(x[i-1]-x[i])+(y[i-1]-y[i])*(y[i-1]-y[i]));
        ans+=t;
    }
    ans+=std::sqrt((x[n-1]*x[n-1])+(y[n-1]*y[n-1]));
    std::cout << ans;
}