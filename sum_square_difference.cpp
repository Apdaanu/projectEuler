#include<bits/stdc++.h>
#define for_int_i(x) for(int i=1; i<=x; ++i)

using namespace std;

int main(){
  long long int sum = 0;
  long long int sq_sum = 0;
  for_int_i(100){
    sum+=i;
    sq_sum+=pow(i, 2);
  }

  cout<<pow(sum, 2)-sq_sum<<endl;

  return 0;
}