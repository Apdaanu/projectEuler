#include<bits/stdc++.h>
#define for_int(i, x) for(int i=1; i<x; ++i)
#define for_it(i) for(auto it=i.begin(); it!=i.end(); ++it)
using namespace std;

int main(){
  long int ans;
  int lim = 500;

  for_int(i, lim){
    for_int(j, lim){
      float test = sqrt(pow(i, 2) + pow(j,2));
      if(floor(test) == test){
        if(i+j+test == 1000){
          ans = test*i*j;
        }
      }
    }
  }
  cout<<ans<<endl;

  return 0;
}