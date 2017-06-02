#ifndef __queue_h
#define __queue_h

#include "utility.h"

namespace Utility
{

// more simple queue
class Queue
{
public:
    Queue() : _head(0), _tail(0) { }

    void enqueue(Element * element)
    {
        if ( _tail ) {
            _tail->next = element;
            _tail = element;
        } else {
            _tail = _head = element;
        }
    }

    Element * dequeue()
    {
        Element * e = _head;
        if ( _head == _tail ) {
            _head = _tail = 0;
        } else {
            _head = _head->next;
        }
        return e;
    }

private:
    Element * _head;
    Element * _tail;
};

}

#endif
