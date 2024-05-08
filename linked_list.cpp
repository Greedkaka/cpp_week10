#include "linked_list.h"
#include <iostream>
using namespace std;

// TODO: LinkedList 클래스 구현 작성
LinkedList::LinkedList(){
    head_->next_=nullptr;
    size_=0;
}

LinkedList::~LinkedList(){
    Node* cur;
    Node* del;

    cur=cur->next_;
    while(cur!=nullptr){
        del=cur;
        cur=cur->next_;
        delete(del);
    }
}

void LinkedList::print(){
    Node* cur=head_;

    cur=cur->next_;
    while(cur!=nullptr){
        cout<<cur->value_<<" ";
        cur=cur->next_;
    }
    cout<<endl;
}

void LinkedList::insert(int index, int value){
    Node* pre=head_;
    Node* newNode=new Node(value);
    
    for(int i=0; i<index; i++)
       pre=pre->next_;
       
    newNode->next_=pre->next_;
    pre->next_=newNode;
    size_++;
}

int LinkedList::get(int index){
    Node* cur=head_;
    
    for(int i=0; i<=index; i++)
        cur=cur->next_;
    
    return cur->value_;
}

void LinkedList::remove(int index){
    Node* cur=head_;
    Node* pre=head_;

    cur=head_->next_;
    for(int i=0; i<index; i++){
        cur=cur->next_;
        pre=pre->next_;
    }

    pre->next_=cur->next_;
    delete(cur);
    size_--;
}