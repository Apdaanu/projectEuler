//not optimized at all

#include<bits/stdc++.h>
#define for_int(i, val) for(int i=2; i<val; ++i)
using namespace std;

bool isPrime(int a){
  bool flag = true;

  for_int(i, a/2+1){
    if(a%i == 0){
      flag = false;
      break;
    }
  }
  return flag;
}

int main(){
  long long int ans = 0;
  for(int i=2; i<2000000; ++i){
    cout<<"Computing..."<<i<<endl;
    if(isPrime(i))
      ans+=i;
  }

  cout<<ans<<endl;
  return 0;
}