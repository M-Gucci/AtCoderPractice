#include<iostream>
#include<string>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    std::string s = "";
    long int sum = 0;
    for(int i=0;i<n;i++){
        std::string c;
        long int l;
        std::cin >> c  >> l;
        sum += l;
        if(sum > 100){
            std::cout << "Too Long" << std::endl;
            return 0;
        }
        for(int j=0;j<l;j++){
            s += c;
        }
    }
    std::cout << s << std::endl;

}