/*#include<iostream>
#include<string>
#include<vector>
int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    std::vector<int> w;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        w.push_back(tmp);
    }

    
}
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), w(n);
    vector<int> max_weight[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> w[i];
    }
}
