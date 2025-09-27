#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    std::map<int, int> m;
    for(int i=0;i<n;i++){
        int t;
        std::cin >> t;
        a.push_back(t);
        m[t] = 1;
    }
    std::vector<int> ori = a;
    std::sort(a.begin(), a.end());

    for(int i=1;i<n;i++){
        if(a[i] == a[i-1] && a[i] != -1){
            std::cout << "No" << std::endl;
            return 0;
        }

    }
    for(int i=1;i<=n;i++){
        if(ori[i-1] == -1){
            for(int j=1;j<=n;j++){
                if(m.find(j) == m.end()){
                    ori[i-1] = j;
                    m[j] = 1;
                    break;
                }
            }
        }
    }
    std::cout << "Yes" << std::endl;
    for(int i=0;i<n;i++){
        std::cout << ori[i] << " ";
    }
    std::cout << std::endl;

}