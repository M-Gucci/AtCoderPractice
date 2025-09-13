#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>

int main(){
    long int n, q;
    std::cin >> n >> q;
    std::vector<long int> a;
    std::vector<long int> b;
    std::vector<long int> min;
    for(long int i=0;i<n;i++){
        long int t;
        std::cin >> t;
        a.push_back(t);
    }
    for(long int i=0;i<n;i++){
        long int t;
        std::cin >> t;
        b.push_back(t);
    }
    for(long int i=0;i<n;i++){
        min.push_back(std::min(a[i], b[i]));
    }
    long int sum = std::reduce(min.begin(), min.end());

    for(long int i=0;i<q;i++){
        std::string c;
        long int x, v;
        std::cin >> c >> x >> v;
        if(c == "A"){
            long int b_min = std::min(a[x-1], b[x-1]);
            a[x-1] = v;
            long int a_min = std::min(a[x-1], b[x-1]);
            sum += a_min - b_min;
            std::cout << sum << std::endl;
        }else{
            long int b_min = std::min(a[x-1], b[x-1]);
            b[x-1] = v;
            long int a_min = std::min(a[x-1], b[x-1]);
            sum += a_min - b_min;
            std::cout << sum << std::endl;
        }
    }

}