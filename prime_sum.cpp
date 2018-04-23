#include <iostream>
using namespace std;

	bool isPrime(int n){
		int i=2;
		while(n!=i){
			if(n%i==0){
				return false;
			}
			i++;
		}
		return true;

	}
int main(){

    int a;
	cout<<"enter the number";
	cin>>a;
	int m=3;
	
	for(int i=m;i<a;i++){
     if(isPrime(i)&&isPrime(a-i) && i<=a-i){
     	cout<<i<<"+"<<a-i<<endl;
     	
     }
     }
    

}

