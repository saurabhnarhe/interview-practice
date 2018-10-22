#include <iostream>
#include<string>
#include<map>
using namespace std;

int main() {
  int num = 123443211;

  int arr[10];
  int i=0;
  while(num!=0) {
    arr[i++] = num%10;
    num /= 10;
  } 

  map<int,int> occ;
  for(auto j: arr) {
    cout<<" j = "<<j<<endl;
    occ[j]++;
  }

  for(auto j:occ)
    cout<<j.first<<": "<<j.second<<" times."<<endl;

  return 0;
}