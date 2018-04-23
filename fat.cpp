#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    string s;
    int count=1;
    getline(cin,s);
    
    for(int i=0;i<(s.length())/2;i++){
        
        if(s[i]==s[s.length()-i-1]){
            true;
        }
        else{
            count=0;
            cout<<"Not"<<s.length();
            return 0;
        }

    }
    if(count==1){
        cout<<"Yes";
    }
    return 0;
}
