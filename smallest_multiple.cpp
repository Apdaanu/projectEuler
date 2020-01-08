#include<bits/stdc++.h>
using namespace std;
#define for_it(i) for(auto it=i.begin(); it!=i.end(); ++it)
#define for_int_i(x) for(int i=0; i<x; ++i)

bool isPrime(int a){
  for(int i=2; i<=a/2; ++i){
    if(a%i==0){
      return false;
    }
  }
  return true;
}

map<int, int> findPrimeFactors(int a){
  map<int, int> ans;
  int test = a/2;
  int split;
  if(a==1){
    return ans;
  }
  if(isPrime(a)){
    ++ans[a];
    return ans;
  }
  while(true){
    if(a%test == 0)
      break;
    --test;
  }
  map<int, int> fac1 = findPrimeFactors(test);
  map<int, int> fac2 = findPrimeFactors(a/test);

  for_it(fac1){
    ans[it->first]+=it->second;
  }
  for_it(fac2){
    ans[it->first]+=it->second;
  }
  return ans;
}

int main(){
  map<int, int> factorCount;
  int ans = 1;

  for(int i=2; i<=20; ++i){
    map<int, int> factors = findPrimeFactors(i);
    for(auto it=factors.begin(); it!=factors.end(); ++it){
      factorCount[it->first] = max(factorCount[it->first], it->second);
    }
  }

  for_it(factorCount){
    ans*=pow(it->first, it->second);
  }

  cout<<ans<<endl;

  return 0;
}