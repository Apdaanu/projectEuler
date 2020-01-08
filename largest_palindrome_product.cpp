#include  <iostream>

using namespace std;

int countDigit(int a){
  int count = 0;
  while(a>0){
    a/=10;
    count++;
  }
  return count;
}

int checkPalindrome(int a){
  int flag = 1;
  int dig = countDigit(a);
  if(dig == 1){
    return 0;
  }
  int *arr = new int[dig];
  int count = 0;
  while(a>0){
    arr[count] = a%10;
    a/=10;
    ++count;
  }
  for(int i=0; i<dig/2; ++i){
    if(arr[i] != arr[dig-1-i]){
      flag = 0;
      break;
    }
  }
  return flag;
}

int checkFactors(int num, int dig){
  int flag = 0;
  for(int i=2; i<=num/2; ++i){
    if(num%i==0){
      if(countDigit(i) == dig && countDigit(num/i) == dig){
        flag =1;
        break;
      }
    }
  }
  return flag;
}

int main(){
  int start = 999*999;
  int reqDigit = 3;
  while(start>0){
    if(checkPalindrome(start)){
      if(checkFactors(start, reqDigit)){
        cout<<start<<endl;
        break;
      }
    }
    start--;
  }
  return 0;
}