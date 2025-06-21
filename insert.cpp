#include<iostream>
#include<vector>

int main(){
    int n,k,x;
    std::cin >> n >> k >> x;
    std::vector<int> value = {};
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        value.push_back(tmp);
    }
    value.push_back(0);

    for(int i=n;i>k;i--){
        value[i]=value[i-1];
    }

    value[k]=x;

    for(int i=0;i<(int)value.size();i++){
        std::cout << value[i] << " ";
    }

}
