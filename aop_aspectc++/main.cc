#include <iostream>

#include "queue.h"
#include "stack.h"

#include "config.h"

int main(){

	int i=0;

#if LIMITED
    Utility::Queue * my_queue = new Utility::Queue(10);
#else
    Utility::Queue * my_queue = new Utility::Queue();
#endif

    Utility::Stack * my_stack = new Utility::Stack();

	i=0;
	while( i < 20)
    	my_queue->enqueue(new Utility::Element(i++));

	i=0;
	while( i < 6)
		my_stack->push(new Utility::Element(i++));


#if NAVIGABLE

	std::cout << "\n-- (*my_queue)[i++]" << std::endl;
	std::cout << "----------------------------------------\n| ";
	i=0;
	while( i < my_queue->count())
		std::cout << (*my_queue)[i++].value << " | ";

    std::cout << "\n-----------------------------------------\n\n" << std::endl;


	std::cout << "\n-- (*my_stack)[i++]" << std::endl;
    std::cout << "----------------------------------------\n| ";
	i=0;
	while( i < my_stack->count())
		std::cout << (*my_stack)[i++].value << " | ";

    std::cout << "\n----------------------------------------\n" << std::endl;

#endif

	std::cout << "-- dequeue()" << std::endl;

#if COUNTABLE
    
    while(my_queue->count() > 0)
        std::cout << my_queue->dequeue()->value << std::endl;

#else

    Utility::Element * e;
    while( (e = my_queue->dequeue() ) )
        std::cout << e->value << std::endl;

#endif

    std::cout << "-- pop()" << std::endl;

#if COUNTABLE

    while(my_stack->count() > 0)
        std::cout << my_stack->pop()->value << std::endl;

#else

    while( (e = my_stack->pop() ) )
        std::cout << e->value << std::endl;

#endif


    return 0;

}