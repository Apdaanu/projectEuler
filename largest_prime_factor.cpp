#include<iostream>

using namespace std;

bool isPrime(long int a){
  int flag = 1;
  for(long int i=2; i<=a/2; ++i){
    if(a%i == 0){
      flag = 0;
    }
  }
  return flag;
}

int main(){
  long long int num = 600851475143 ;
  long long int org = num;
  long long int test = 2;
  long long int ans = 0;

  while(num > 2 && test<=org/2){
    if(num%test==0){
      if(isPrime(test)){
        ans = test;
        num = num/test;
        test = 2;
      }
      else{
        num = num/test;
        test = 2;
      }
    }
    else{      
      ++test;
    }
  }
  
  cout<<ans<<endl;
  return 0;
}