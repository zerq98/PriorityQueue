#include <iostream>
#include "priority_queue.h"

using namespace std;

int main(int argc, char** argv)
{

	PriorityQueue *pq = new PriorityQueue();
	if (pq->isEmpty()) cout << "Kolejka pusta" << endl;
	else cout << "Kolejka niepusta" << endl;

	person p1;
	p1.name = "Kobojek Marek";
	pq->add_priority(&p1);
	if (pq->isEmpty())
		cout << "Kolejka pusta" << endl;
	else cout << "Kolejka niepusta" << endl;
	pq->print_queue();

	person p2;
	p2.name = "Burakowski Grzegorz";
	pq->add_priority(&p2);
	if (pq->isEmpty()) cout << "Kolejka pusta" << endl;
	else cout << "Kolejka niepusta" << endl;
	pq->print_queue();

	person p3;
	p3.name = "Zubrzycka Grazyna";
	pq->add_priority(&p3);
	if (pq->isEmpty()) cout << "Kolejka pusta" << endl;
	else cout << "Kolejka niepusta" << endl;
	pq->print_queue();

	person p4;
	p4.name = "Grzybowska Lidia";
	pq->add_priority(&p4);
	if (pq->isEmpty()) cout << "Kolejka pusta" << endl;
	else cout << "Kolejka niepusta" << endl;
	pq->print_queue();


	system("pause");
	return 0;
}