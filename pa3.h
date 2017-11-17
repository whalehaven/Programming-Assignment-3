#ifndef PA3_H
#define PA3_H

struct node
{
	int data;
	node *next;
};


class pa3
{
public:
	node *head;
	node *tail;
	node *pool;
	pa3();
	~pa3();
	void push( int data );
	void pop();
	void print();

};



#endif // PA3_H
