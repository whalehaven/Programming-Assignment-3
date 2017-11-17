#include "pa3.h"
#include <iostream>

pa3::pa3()
{
	this->head = nullptr;
	this->tail = nullptr;
	this->pool = nullptr;
}

pa3::~pa3()
{
	delete this;
}

void 
pa3::push( int data )
{
	if ( this->head == nullptr)
	{
		node *n = new node();
		n->data = data;
		this->head = n;
		this->tail = n;
	}
	
	else
	{
		node *n = new node();
		n->data = data;
		tail->next = n;
		tail = n;
	}
		
}

void
pa3::print()
{
	node *n = new node();
	n = head;
	
	while ( n )
	{
		std::cout << n->data << std::endl;
		n = n->next;
	}
}

