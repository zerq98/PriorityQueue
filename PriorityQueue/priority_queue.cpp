#include <iostream>
#include <string.h>
#include "priority_queue.h"


PriorityQueue::PriorityQueue(){
	head=nullptr;
	count=0;
}


PriorityQueue::~PriorityQueue(){
	node *tmp = head->next;
	while (tmp != nullptr)
	{
		delete head;
		head = tmp;
		tmp = tmp->next;
	}
	
}



void PriorityQueue::add_priority(person *p){
	node *tmp=new node;
	tmp->data=p;
	if(head == nullptr){
		tmp->next = nullptr;
		tmp->prev = nullptr;
		head=tmp;
	}else if(count==1){
		tmp->next=nullptr;
		tmp->prev=head;
		head->next=tmp;
	}else{
		if(head->data->name > p->name){
			bool ifBreak = false;
			node *temp = head;
			node *in=nullptr;
			
			while(temp->next != nullptr){
				temp = temp->next;
				if(temp->data->name < p->name){
					ifBreak=true;
					in=temp;
				}
			}
			
			if(!ifBreak){
				tmp->prev=temp;
				tmp->next = nullptr;
				temp->next=tmp;
			}else{
				temp=in;
				tmp->prev=temp->prev;
				temp->prev=tmp;
				tmp->next=temp;
				tmp->prev->next=tmp;
				
			}
		}else{
			node *temp=new node;
			temp->data=p;
			temp->next=head;
			temp->prev=nullptr;
			head=temp;
		}
	}
	count++;
}

person * PriorityQueue::get_first(){
	return head->data;
}

bool PriorityQueue::isEmpty(){
	if(count==0) return true;
	
	return false;
}

void PriorityQueue::pop_first(){
	if(head!=nullptr) head=head->next;
}

void PriorityQueue::print_queue(){
	node *tmp=head;
	for(int i=count-1;i>=0;i--){
		if(tmp != nullptr){
			std::cout << tmp->data->name.c_str() << " ";
			tmp=tmp->next;
		}
	}
}