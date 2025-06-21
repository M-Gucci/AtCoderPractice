#include<iostream>
#include<vector>
#include<string>

int main(){
    std::vector<int> a;
    for(int i=0;i<100;i++){
        a.push_back(0);
    }

    int q;
    std::cin >> q;
    for(int i=0;i<q;i++){
        int c;
        std::cin >> c;
        int x;
        if(c==1){
            std::cin >> x;
            a.push_back(x);
        }else{
            int size=a.size();
            int tmp=a[size-1];
            a.pop_back();
            std::cout << tmp << std::endl;
        }
    }
}