#include<iostream>
#include<string>
#include<vector>
#include<map>

int main(){
    int n;
    std::cin >> n;
    std::map<int,int> a_1;
    std::map<int,int> a_2;
    int a_1v=0;
    int a_2v=0;
    for(int i=1;i<=n;i++){
        a_1[i]=0;
        a_2[i]=0;
    }
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
        if(i==0){
            a_1[tmp]++;
            a_1v=1;
        }else{
            a_2[tmp]++;
            if(a_2[tmp]==1){
                a_2v++;
            }
        }
    }
    int max=a_1v+a_2v;
    for(int i=1;i<n-1;i++){
        a_1[a[i]]++;
        a_2[a[i]]--;
        if(a_1[a[i]]==1){
            a_1v++;
        }
        if(a_2[a[i]]==0){
            a_2v--;
        }
        if(max<a_1v+a_2v){
            max=a_1v+a_2v;
        }
    }

    std::cout << max << std::endl;
}