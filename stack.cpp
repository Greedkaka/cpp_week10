#include "stack.h"

// TODO: Stack 클래스 구현 작성
void Stack::push(int data){
    LinkedList::insert(size_,data);
} 

int Stack::pop(){
    int num=LinkedList::get(size_-1);
    LinkedList::remove(size_-1);
    return num;
} 

int Stack::peek(){
    return LinkedList::get(size_-1);
} 

void Stack::operator+=(int data){

}