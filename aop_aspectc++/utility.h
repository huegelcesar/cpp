#ifndef __utility_h
#define __utility_h

namespace Utility
{

// more simple entry
class Element
{
public:
    int value;

    Element() : next(0) {}
    Element(int _value) : value(_value), next(0) {}

private:
    friend class Queue;
    friend class Stack;
    Element * next;
};

}

#endif