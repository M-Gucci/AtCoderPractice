#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string s,t;
    std::cin >> s >> t;
    int n=s.size();
    int a[n+1]={0};
    for(int i=0;i<n;i++){
        if(s[i]==t[i]){
            a[i]=1;
        }
    }
    /*for(int i=0;i<n;i++){
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
    */
    std::vector<std::string> x;

    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(s[i]>=t[i]){
                s[i]=t[i];
                //std::cout << s << "q" << "\n";
                x.push_back(s);
                a[i]=1;
            }
        }
    }

    for(int i=n-1;i>=0;i--){
        if(a[i]==0){
            s[i]=t[i];
            //std::cout << s << "w" << "\n";
            x.push_back(s);
            a[i]=1;
        }
    }

    int ansnum=x.size();
    std::cout << ansnum << "\n";
    for(int i=0;i<ansnum;i++){
        std::cout << x[i] << "\n";
    }
}