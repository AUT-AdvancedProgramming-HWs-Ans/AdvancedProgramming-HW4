/**
 * @file main.cpp
 * @author Erfan Rasti (erfanrasty@gmail.com)
 * @brief This is the main file for testing UniquePtr class
 * @version 1.0.3
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

// Importing the libraries
#include "shared_ptr.h"
#include "unique_ptr.h"
#include <gtest/gtest.h>
#include <iostream>

int main(int argc, char** argv)
{
    if (false) // make false to run unit-tests
    {
        // debug section
        //
        // Constructor of UniquePtr tests
        // std::cout << "******** Constructor of UniquePtr tests ********" << std::endl;
        // UniquePtr<int> ptr1 { nullptr };
        // std::cout << "ptr1.get() = " << ptr1.get() << std::endl;
        // std::cout << "*ptr1.get() = " << *ptr1.get() << std::endl;

        // make_unique of UniquePtr tests
        // std::cout << "******** make_unique of UniquePtr tests ********" << std::endl;
        // int a { 10 };
        // UniquePtr<int> ptr2 { make_unique<int>(a) };
        // std::cout << "ptr2.get() = " << ptr2.get() << std::endl;
        // std::cout << "*ptr2.get() = " << *ptr2.get() << std::endl;

        // Default constructor of UniquePtr tests
        // std::cout << "******** Default constructor of UniquePtr tests ********" << std::endl;
        // UniquePtr<int> ptr3;
        // std::cout << "ptr3.get() = " << ptr3.get() << std::endl;
        // std::cout << "*ptr3.get() = " << *ptr3.get() << std::endl;

        // Destructor of UniquePtr tests
        // std::cout << "******** Destructor of UniquePtr tests ********" << std::endl;
        // UniquePtr<int> ptr4 { new int { 10 } };
        // std::cout << "ptr4.get() = " << ptr4.get() << std::endl;
        // std::cout << "*ptr4.get() = " << *ptr4.get() << std::endl;
        // ptr4.~UniquePtr();
        // std::cout << "ptr4.get() = " << ptr4.get() << std::endl;
        // std::cout << "*ptr4.get() = " << *ptr4.get() << std::endl;

        // Copy constructor of UniquePtr tests
        // std::cout << "******** Copy constructor of UniquePtr tests ********" << std::endl;
        // UniquePtr<int> ptr1 { new int { 10 } };
        // UniquePtr<int> ptr2 { ptr1 };

        // Operator= of UniquePtr tests
        // std::cout << "******** Operator= of UniquePtr tests ********" << std::endl;
        // UniquePtr<int> ptr1 { new int { 10 } };
        // UniquePtr<int> ptr2 { new int { 11 } };
        // ptr2 = ptr1;

        // Operator* of UniquePtr tests
        // std::cout << "******** Operator* of UniquePtr tests ********" << std::endl;
        // UniquePtr<int> ptr { new int { 10 } };
        // std::cout << "*ptr = " << *ptr << std::endl;
        // std::cout << "ptr = " << ptr << std::endl;

        // *ptr = 20;
        // std::cout << "*ptr = " << *ptr << std::endl;
        // std::cout << "ptr = " << ptr << std::endl;

        // Operator-> of UniquePtr tests
        // std::cout << "******** Operator-> of UniquePtr tests ********" << std::endl;
        // UniquePtr<std::string> ptr { new std::string { "hello" } };
        // std::cout << *ptr << std::endl;
        // std::cout << ptr->length() << std::endl; // output: 5

        // ptr->append(" world");

        // std::cout << *ptr << std::endl;
        // std::cout << ptr->length() << std::endl; // output: 11

        // Operator bool of UniquePtr tests
        // std::cout << "******** Operator bool of UniquePtr tests ********" << std::endl;
        // UniquePtr<int> ptr { new int { 10 } };
        // if (ptr) {
        //     std::cout << "ptr is not nullptr" << std::endl;
        // }

        // Reset member function of UniquePtr tests
        // std::cout << "******** Reset member function of UniquePtr tests ********" << std::endl;
        // UniquePtr<int> ptr { new int { 10 } };
        // ptr.reset();
        // std::cout << "ptr.get() = " << ptr.get() << std::endl;

        //  Reset with new object member function UniquePtr tests
        // std::cout << "******** Reset with new object member function of UniquePtr tests ********" << std::endl;
        // UniquePtr<std::string> ptr { new std::string { "hello" } };
        // std::cout << ptr.get() << std::endl;
        // ptr.reset(new std::string { "nice" });
        // std::cout << ptr.get() << std::endl;
        // std::cout << *ptr << std::endl; // output: nice

        // Release member function of UniquePtr tests
        // std::cout<<"******** Release member function of UniquePtr tests ********"<<std::endl;
        // UniquePtr<int> ptr { new int { 10 } };
        // int* p { ptr.release() };
        // std::cout << "*p = " << *p << std::endl;
        // std::cout << "ptr.get() = " << ptr.get() << std::endl;
        // delete p;

    } else {
        ::testing::InitGoogleTest(&argc, argv);
        std::cout << "RUNNING TESTS ..." << std::endl;
        int ret { RUN_ALL_TESTS() };
        if (!ret)
            std::cout << "<<<SUCCESS>>>" << std::endl;
        else
            std::cout << "FAILED" << std::endl;
    }
    return 0;
}