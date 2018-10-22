#include <iostream>
#include<map>
#include<fstream>
using namespace std;
int main() {
 
  fstream file("file.txt", ios::in);
  string word;
  
  map<string, int> wordsmap;

  while(file>>word) {
    wordsmap[word]++;
  }

  for(auto i: wordsmap) {
    cout<<i.first<<": "<<i.second<<" times."<<endl;
  }

  return 0;
}