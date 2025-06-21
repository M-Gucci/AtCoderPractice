#include<iostream>
#include<vector>
#include<string>

int main(){
    int n;
    std::cout << "Enter the number of values;\n";
    std::cin >> n;
    std::vector<int> values;
    std::cout << "Enter the values:\n";
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        values.push_back(tmp);

    }

    std::cout << "the values are:\n";

    for(int z : values){
        std::cout << z << "\n";
    }
}