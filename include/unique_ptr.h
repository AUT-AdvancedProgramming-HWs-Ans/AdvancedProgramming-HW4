/**
 * @file unique_ptr.h
 * @author Erfan Rasti (erfanrasty@gmail.com)
 * @brief This is the header file for UniquePtr class
 * @version 1.0.5
 * @date 2022-05-05
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
    UniquePtr(const UniquePtr& uPtr) = delete;
    ~UniquePtr();

    UniquePtr& operator=(const UniquePtr& uPtr) = delete;
    T& operator*() const;
    T* operator->() const;
    operator bool() const;

    T* get() const;
    void reset();
    void reset(T* __p);
    T* release();

private:
    T* _p;
};

#include "unique_ptr.hpp"

#endif // UNIQUE_PTR