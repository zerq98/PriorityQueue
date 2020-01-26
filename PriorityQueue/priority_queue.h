#include <iostream>

struct person
{
	std::string name;
};

struct node
{
	node *next;
	node *prev;
	person *data;
};

class PriorityQueue
{
private:
	node *head;
	int count;

public:
	PriorityQueue(); //konstruktor
	~PriorityQueue(); //destruktor
	bool isEmpty();
	person* get_first();
	void add_priority(person *p);
	void pop_first();
	void print_queue();
};