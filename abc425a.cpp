#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int main(){
    int n;
    std::cin >> n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%2 == 0){
            sum += i*i*i;
        }else{
            sum += -1*(i*i*i);
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
