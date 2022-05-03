/**
 * @file unique_ptr.h
 * @author Erfan Rasti (erfanrasty@gmail.com)
 * @brief This is the header file for UniquePtr class
 * @version 1.0.1
 * @date 2022-05-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef UNIQUE_PTR
#define UNIQUE_PTR

// Importing the libraries

#include <iostream>
#include <typeinfo>

template <typename T>
class UniquePtr {
public:
    UniquePtr();
    UniquePtr(T* __p);
    ~UniquePtr();

    T* get() const;

private:
    T* _p;
};

#include "unique_ptr.hpp"

#endif // UNIQUE_PTR