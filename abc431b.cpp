#include<iostream>
#include<vector>
#include<string>

int main(){
    int x;
    std::cin >> x;
    int n;
    std::cin >> n;
    std::vector<int> w;
    std::vector<int> c;
    for(int i=0;i<n;i++){
        int t;
        std::cin >> t;
        w.push_back(t);
        c.push_back(0);
    }
    int q;
    std::cin >> q;
    for(int i=0;i<q;i++){
        int p;
        std::cin >> p;
        if(c[p-1] == 0){
            x += w[p-1];
            c[p-1] = 1;
        }else{
            x -= w[p-1];
            c[p-1] = 0;
        }
        std::cout << x << std::endl;
    }

    
}