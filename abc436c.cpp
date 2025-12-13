#include<iostream>
#include<string>
#include<algorithm>
#include<string>
#include<utility>
#include<map>
#include<vector>

int main(){
    int n, m;
    std::cin >> n >> m;
    std::vector<int> r;
    std::vector<int> c;
    for(int i=0;i<m;i++){
        int t1, t2;
        std::cin >> t1 >> t2;
        r.push_back(t1);
        c.push_back(t2);
    }
    std::map<std::pair<int, int>, int> a;
    int sum = 0;

    for(int i=0;i<m;i++){
        int tr = r[i], tc = c[i];
        if(a.find({tr, tc}) == a.end() && a.find({tr+1, tc}) == a.end() && a.find({tr, tc+1}) == a.end() && a.find({tr+1, tc+1}) == a.end()){
            a[{tr, tc}] = 1;
            a[{tr+1, tc}] = 1;
            a[{tr, tc+1}] = 1;
            a[{tr+1, tc+1}] = 1;
            sum++;
        }
    }

    std::cout << sum << std::endl;
}