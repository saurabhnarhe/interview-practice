#include<iostream>
#include<stack>
using namespace std;
class Queue {
  stack <int> S;
  public:
    int dequeue() {
      if(S.empty()) {
        cout<<"queue is empty";
        return 1;
      } else {
        return recursiveD();
      }
    }
    int recursiveD() {
      if(S.size() == 1) {
        int x = S.top();
        S.pop();
        return x;
      }
      int val = S.top();
      S.pop();
      int res = recursiveD();
      S.push(val);
      return res;
    }
    void enqueue(int x) {
      S.push(x);
    }
};

int main() {
  Queue Q;
  Q.enqueue(10);
  Q.enqueue(20);
  Q.enqueue(30);
  cout<<Q.dequeue()<<endl;
  cout<<Q.dequeue()<<endl;
  cout<<Q.dequeue()<<endl;
  Q.enqueue(1);
  cout<<Q.dequeue()<<endl;
  return 0;
}