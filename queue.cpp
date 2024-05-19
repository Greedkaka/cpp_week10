#include "queue.h"

// TODO: Queue 클래스 구현 작성
void Queue::push(int data){
    LinkedList::insert(size_,data);
}

int Queue::pop(){
    int num=LinkedList::get(0);
    LinkedList::remove(0);
    return num;
}

int Queue::peek(){
    return LinkedList::get(0);
}

void Queue::operator+=(int data){
    LinkedList::insert(size_,data);
}