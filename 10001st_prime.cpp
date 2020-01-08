#include<iostream>
using namespace std;

int checkPrime(long int a){
  int flag = 1;
  for(long int i=2; i<=a/2; ++i){
    if(a%i==0){
      flag = 0;
      break;
    }
  }
  return flag;
}

int main(){
  int count = 0;
  int ans = 0;
  int num = 2;
  while(count != 10001){
    cout<<"Checking: "<<num<<endl;
    if(checkPrime(num)){
      ans = num;
      ++count;
    }
    ++num;
  }
  cout<<ans<<endl;

  return 0;
} 