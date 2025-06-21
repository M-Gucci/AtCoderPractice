#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    int cnt=0;

    cnt+=n;
    cnt+=n-1;
    std::vector<int> b;
    for(int i=1;i<n;i++){
        b.push_back(a[i]-a[i-1]);
    }
    int size_b=b.size();

    for(int i=0;i<size_b;i++){
        std::cout << b[i] << " ";
    }
    std::cout << "\n";
    int num=0;
    int num2=0;
    for(int i=1;i<size_b;i++){
        if(b[i]==b[i-1]){
            num++;
            num2+=num;
        }else{
            cnt+=num2;
            num=0,num2=0;
        }
    }
    cnt+=num2;

    std::cout << cnt << "\n";
}