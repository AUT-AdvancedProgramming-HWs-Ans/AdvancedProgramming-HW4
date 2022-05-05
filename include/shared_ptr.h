/**
 * @file shared_ptr.h
 * @author Erfan Rasti (erfanrasty@gmail.com)
 * @brief This is the header file for SharedPtr class
 * @version 1.0.9
 * @date 2022-05-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef SHARED_PTR
#define SHARED_PTR

// Importing the libraries

#include <iostream>
#include <typeinfo>

template <typename T>
class SharedPtr {
public:
    SharedPtr();
    SharedPtr(T* __p);
    SharedPtr(const SharedPtr& sPtr);
    ~SharedPtr();

    SharedPtr& operator=(const SharedPtr& sPtr);
    T& operator*() const;
    T* operator->() const;

    T* get() const;
    int use_count() const;
    void reset();
    void reset(T* __p);

private:
    T* _p;
    int* _count;
};

#include "shared_ptr.hpp"

#endif // SHARED_PTR