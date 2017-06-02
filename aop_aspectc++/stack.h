#ifndef __stack_h
#define __stack_h

#include "utility.h"

namespace Utility
{

// more simple stack
class Stack
{
public:
    Stack() : _top(0) { }

    void push(Element * element)
    {
        if ( _top ) {
            element->next = _top;
            _top = element;
        } else {
            _top = element;
        }
    }

    Element * pop()
    {
        Element * e = _top;
        if ( _top->next ) {
            _top = _top->next;
        } else {
            _top = 0;
        }
        return e;
    }

private:
    Element * _top;
};

}

#endif
