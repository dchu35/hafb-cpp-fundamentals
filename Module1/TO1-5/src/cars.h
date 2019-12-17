#ifndef CARS_H_
#define CARS_H_

int HorsePower();      // "standard" namespace

namespace lamborghini  // inside lamborghini namespace
{
    int HorsePower();
}

namespace porsche      // inside porsche namespace
{
    int HorsePower();
    
}


#endif /* !CARS_H_ */
