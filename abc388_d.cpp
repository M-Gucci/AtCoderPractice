#include<iostream>
#include<vector>

int main(){
    int n;
    std::vector<int> a;
    std::cin >> n;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    
    for(int i=0;i<n;i++){
        a[i]-=(n-i);
        if(a[i]<0){
            a[i]=0;
        }
    }

    for(int i=0;i<n;i++){
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
}