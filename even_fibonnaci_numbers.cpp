#include<iostream>

using namespace std;

int main(){
  int tgt = 4000000;
  int sum = 0;
  int prev1 = 0, prev2 = 1, curr = 0;

  while(curr<tgt){
    curr = prev1+prev2;
    if(curr%2==0){
      sum+=curr;
    }
    prev1 = prev2;
    prev2 = curr;
  }

  cout<<sum<<endl;
  return 0;
}