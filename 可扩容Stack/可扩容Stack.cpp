// ø…¿©»›Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Node{
public:
	Node(int item):data(item){
		this->next = NULL;
	}
	Node(){};
	Node * next;
	
private:
	int data;
};

class Stack {
private:
	Node * head;
public:
	Stack(){
		this->head = new Node();
		this->head->next = NULL;
	}
	~Stack(){
		delete head;
	}
	void push(int item);
	int pop();
	bool isEmpty();
};


void Stack::push(int item){
	Node * node = new Node(item);
	node->next = head->next;
	head->next = node;
}

int Stack::pop(){
	Node * p = head->next;
	head->next = p->next;
	delete p;
	return 0;
}



int main(int argc, char* argv[])
{
	return 0;
}
