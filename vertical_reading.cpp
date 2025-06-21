/*#include<iostream>
#include<string>
#include<vector>
int main(){
    std::string s,t;
    std::cin >> s >> t;
    std::vector<std::string> str;
    std::string tmp;
    size_t Size=s.length();
    long int size=(int)Size;
    int n,m;
    for(int i=1;i<size;i++){
        n=0;
        m=i;
        for(int j=0;j*m<size;j++){
            tmp=s.substr(n,m);
            str.push_back(tmp);
            n+=m;
        }
        int a=str.size();
        char c[100];
        for(int j=0;j<a;j++){
            std::string TMP=str[j];
            std::cout << TMP << " " << j ;
            if((int)TMP.length()==m){
                std::string ans=
                c[j]=ans;
            }
        }
        std::string ans=c;
       // std::cout << "ans:" << c << '\n';
        if(ans==t){
            std::cout << "Yes";
            return 0;
        }
    }
    std::cout << "No";
}
*/
#include<iostream>
#include<string>
#include<vector>

int main(){
    std::string s,t;
    std::cin >> s >> t;
    for(int w=1;w<(int)s.size();w++){
        for(int c=0;c<w;c++){
            std::string now="";
            for(int i=c;i<(int)s.size();i+=w){
                //c番目の文字を抽出
                now+=s[i]; //文字列の連結
            }
            if(now == t){
                std::cout << "Yes" << '\n';
                return 0;
            }
        }
    }

    std::cout << "No" << '\n';
}