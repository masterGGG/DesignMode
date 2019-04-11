/*************************************************************************
    > File Name: AbstractProductA.h
    > Author: ian
    > Mail: ian@taomee.com 
    > Created Time: Thu 11 Apr 2019 10:26:49 AM CST
 ************************************************************************/

#ifndef _ABSTRACTPRODUCTA_H_
#define _ABSTRACTPRODUCTA_H_


#include <stdio.h>


class AbstractProductA{

    public:
            AbstractProductA();
                virtual ~AbstractProductA();
                    
    public:
                    virtual void operationA() = 0;
};

class ProductA_1:public AbstractProductA{

    public:
            ProductA_1();
                virtual ~ProductA_1();
                    
    public:
                    void operationA();
};

class ProductA_2:public AbstractProductA{

    public:
            ProductA_2();
                ~ProductA_2();
                    
    public:
                    void operationA();
};

#endif
