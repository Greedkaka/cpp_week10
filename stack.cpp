#include "stack.h"

// TODO: Stack 클래스 구현 작성
void Stack::push(int data){
    LinkedList::insert(0,data);
} 

int Stack::pop(){
    int num=LinkedList::get(0);
    LinkedList::remove(0);
    return num;
} 

int Stack::peek(){
    return LinkedList::get(0);
} 

void Stack::operator+=(int data){
    LinkedList::insert(0,data);
}