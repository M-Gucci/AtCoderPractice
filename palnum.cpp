#include<iostream>
#include<vector>
#include<string>

bool jug(std::string n){
    std::string tmp;
    int leng=n.length();
    for(int i=0;i<leng;i++){
        char t=n[leng-(i+1)];
        std::string a={t};
        tmp+=a;
    }
    if(n==tmp){
        return true;
    }else{
        return false;
    }
}

void f(std::string num,int i){
    int len=num.length();
    if(num[len-i]=='9'){
        num[len-i]='0';
        f(num,i+1);
    }else{
        int b=num[len-i]-48;
            b++;
            char c=b+48;
            num[len-i]=c;
    }
}

int main(){
    unsigned long long n;
    std::cin >> n;
    unsigned long long cnt=0;
    std::string num = "0";
    while(true){
        if(jug(num)){
            //std::cout << "i";
            cnt++;
        }
        if(cnt==n){
            std::cout << num;
            return 0;
        }

        int len=num.length();
        if(num[len-1]!='9'){
            int b=num[len-1]-48;
            b++;
            char c=b+48;
            num[len-1]=c;
        }else{
            f(num,1);
        }
    }
}

//miss!!