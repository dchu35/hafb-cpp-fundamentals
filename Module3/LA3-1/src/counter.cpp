#include "counter.h"

Counter Counter::operator ++()
{
    // ++count_;
    // Counter temp;          // create a dummy object
    // temp.count_ = count_;  // set the value
    // return temp;           // return the object
    return Counter(++count_);
}