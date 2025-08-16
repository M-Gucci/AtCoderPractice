#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<cmath>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    std::vector<int> b;
    for(int i=0;i<n;i++){
        int n1, n2;
        std::cin >> n1 >> n2;
        a.push_back(n1);
        b.push_back(n2);
    }
    std::vector<int> a2 = a;
    std::vector<int> b2 = b;

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    int size = a.size();
    int x_mid = (a[0] + a[size - 1]) / 2;
    int y_mid = (b[0] + b[size - 1]) / 2;
    //std::cout << "mid " << x_mid << " " << y_mid << std::endl;
    long int max = 0;
    for(int i=0;i<n;i++){
        int t_x = std::fabs(a2[i] - x_mid);
        int t_y = std::fabs(b2[i] - y_mid);
        int t = std::max(t_x, t_y);
        //std::cout << t_x << " " << t_y << std::endl;
        max = std::max(max, (long)t);
    }

    std::cout << max << std::endl;
}