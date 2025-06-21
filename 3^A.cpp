#include<iostream>
#include<vector>
int timesof3(int x){
    int q=1;
    for(int i=0;i<x;i++){
        q=q*3;
    }
    //std::cout << q << "\n";
    return q;
}

int main(){
    int m;
    std::cin >> m;
    std::vector<int> a;
    int cnt=0;
    int t=10;
    while(true){
        int tmp=timesof3(t);
        if(m>=tmp){
            m=m-tmp;
            a.push_back(t);
            cnt++;
            //std::cout << "a";
        }else{
            t--;
            //std::cout << "q";
        }
        if(m==0){
            std::cout << cnt << "\n";
            int size=a.size();
            for(int i=0;i<size;i++){
                std::cout << a[i] << " ";
            }
            std::cout << "\n";
            return 0;
        }
    }
}