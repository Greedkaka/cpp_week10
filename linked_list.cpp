#include "linked_list.h"
#include <iostream>
using namespace std;

// TODO: LinkedList 클래스 구현 작성
LinkedList::LinkedList() {
    head_=nullptr;
    size_=0;
}

LinkedList::~LinkedList() {
    Node* cur=head_;

    for(int i=0; i<size_; i++) {
        Node* del=cur;
        cur=cur->next_;
        delete del;
    }
}

void LinkedList::print() {
    Node* cur=head_;

    for(int index=0; index<size_; index++) {
        cout<<cur->value_<<" ";
        cur=cur->next_;
    }
    cout << endl;
}

void LinkedList::insert(int index, int value) {
    Node* pre=head_;
    Node* newNode=new Node(value);
    
    if(index == 0) {
        newNode->next_=head_;
        head_=newNode;
    }

    else{
        for(int i = 1 ; i < index ; i++)
            pre=pre->next_;
        
        newNode->next_ =pre->next_;
        pre->next_=newNode;
    }

    size_++;
}

int LinkedList::get(int index) {
    Node* cur=head_;

    for(int i=0; i<index; i++) {
        cur=cur->next_;
    }
    
    return cur->value_;
}

void LinkedList::remove(int index) {
    Node* cur=head_;
    Node* del;

    if(index==0) {
        del=head_;
        head_=head_->next_;
        delete del;
    }
    
    else{
        for(int i = 1 ; i < index ; i++)
            cur=cur->next_;
        
        del=cur->next_;
        cur->next_=del->next_;
        delete del;
    }
    size_--;
}