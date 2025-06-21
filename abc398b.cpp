#include<iostream>
#include<vector>
#include<string>
#include<map>

int main(){
    std::map<int,int> a;
    for(int i=1;i<=13;i++){
        a[i]=0;
    }
    for(int i=0;i<7;i++){
        int tmp;
        std::cin >> tmp;
        a[tmp]+=1;
    }

    int over_3=0;
    int just_2=0;

    for(int i=1;i<=13;i++){
        if(a[i]==2){
            just_2++;
        }else if(a[i]>=3){
            over_3++;
        }
    }

    if((just_2>=1 && over_3==1) || over_3>=2){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }


}