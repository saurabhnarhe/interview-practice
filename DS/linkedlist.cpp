#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct Node {
  int data;
  Node *next;
}Node;

void display(Node *head) {
  if(!head) 
    return;
  cout<<"\t"<<(head->data);
  display(head->next);
}

int main() {
  Node *newNode;
  newNode=(Node *)malloc(sizeof(Node));;
  newNode->data = 10;
  newNode->next='\0';
  Node *head=newNode;
  display(head);
  return 1;
}