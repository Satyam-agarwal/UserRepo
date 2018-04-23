#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <cstring>
using namespace std;


int main(){
    char s[12]="satyam";
    char s2[12]="asas";
    char s3[12];
   
    string first;
    getline(cin,first);
    cin>>s3;

    
    
    int n=first.find('s');
    //first=first.substr(n,n);
    first.replace (n,6,"akshat");
    cout<<first<<endl;
    
    cout<<pow(2,5);
    int a= strcmp(s,s3);
    cout<<a;
}
