/**
 * @file main.cpp
 * @author Erfan Rasti (erfanrasty@gmail.com)
 * @brief This is the main file for testing UniquePtr class
 * @version 1.0.6
 * @date 2022-05-05
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
    if (true) // make false to run unit-tests
    {
        // debug section

        /*
            // Default constructor of UniquePtr test 0
            std::cout << "******** Default constructor of UniquePtr test ********" << std::endl;
            UniquePtr<int> ptr3;
            std::cout << "ptr3.get() = " << ptr3.get() << std::endl;
            std::cout << "*ptr3.get() = " << *ptr3.get() << std::endl; // Segmentation fault (nullptr)

        */

        /*
            // Constructor of UniquePtr test 1
            std::cout << "******** Constructor of UniquePtr test ********" << std::endl;
            UniquePtr<int> ptr1 { nullptr };
            std::cout << "ptr1.get() = " << ptr1.get() << std::endl;
            std::cout << "*ptr1.get() = " << *ptr1.get() << std::endl;
        */

        /*
            // Copy constructor of UniquePtr test 2
            std::cout << "******** Copy constructor of UniquePtr test ********" << std::endl;
            UniquePtr<int> ptr1 { new int { 10 } };
            UniquePtr<int> ptr2 { ptr1 };
        */

        /*
            // Destructor of UniquePtr test 3
            std::cout << "******** Destructor of UniquePtr test ********" << std::endl;
            UniquePtr<int> ptr4 { new int { 10 } };
            std::cout << "ptr4.get() = " << ptr4.get() << std::endl;
            std::cout << "*ptr4.get() = " << *ptr4.get() << std::endl;
            ptr4.~UniquePtr();
            std::cout << "ptr4.get() = " << ptr4.get() << std::endl;
            std::cout << "*ptr4.get() = " << *ptr4.get() << std::endl;
        */

        /*
            // Operator= of UniquePtr test 4
            std::cout << "******** Operator= of UniquePtr test ********" << std::endl;
            UniquePtr<int> ptr1 { new int { 10 } };
            UniquePtr<int> ptr2 { new int { 11 } };
            ptr2 = ptr1;
        */

        /*
            // Operator* of UniquePtr test 5
            std::cout << "******** Operator* of UniquePtr test ********" << std::endl;
            UniquePtr<int> ptr { new int { 10 } };
            std::cout << "*ptr = " << *ptr << std::endl;
            std::cout << "ptr = " << ptr << std::endl;
            *ptr = 20;
            std::cout << "*ptr = " << *ptr << std::endl;
            std::cout << "ptr = " << ptr << std::endl;
        */

        /*
            // Operator-> of UniquePtr test 6
            std::cout << "******** Operator-> of UniquePtr test ********" << std::endl;
            UniquePtr<std::string> ptr { new std::string { "hello" } };
            std::cout << *ptr << std::endl;
            std::cout << ptr->length() << std::endl; // output: 5
            ptr->append(" world");
            std::cout << *ptr << std::endl;
            std::cout << ptr->length() << std::endl; // output: 11
        */

        /*
            // Operator bool of UniquePtr test 7
            std::cout << "******** Operator bool of UniquePtr test ********" << std::endl;
            UniquePtr<int> ptr { new int { 10 } };
            if (ptr) {
                std::cout << "ptr is not nullptr" << std::endl;
            }
        */

        /*
            // get() member function of UniquePtr test 8
            // std::cout << "******** get() member function of UniquePtr test ********" << std::endl;
            UniquePtr<int> ptr { new int { 10 } };
            std::cout << "ptr.get() = " << ptr.get() << std::endl;
            std::cout << "*ptr.get() = " << *ptr.get() << std::endl;
            *ptr.get() = 20;
            std::cout << "*ptr.get() = " << *ptr.get() << std::endl;
            std::cout << "ptr.get() = " << ptr.get() << std::endl;
        */

        /*
            // Reset member function of UniquePtr test 9
            std::cout << "******** Reset member function of UniquePtr test ********" << std::endl;
            UniquePtr<int> ptr { new int { 10 } };
            ptr.reset();
            std::cout << "ptr.get() = " << ptr.get() << std::endl;
        */

        /*
             //  Reset with new object member function UniquePtr test 10
             std::cout << "******** Reset with new object member function of UniquePtr test ********" << std::endl;
             UniquePtr<std::string> ptr { new std::string { "hello" } };
             std::cout << ptr.get() << std::endl;
             ptr.reset(new std::string { "nice" });
             std::cout << ptr.get() << std::endl;
             std::cout << *ptr << std::endl; // output: nice
         */

        /*
            // Release member function of UniquePtr test 11
            std::cout<<"******** Release member function of UniquePtr test ********"<<std::endl;
            UniquePtr<int> ptr { new int { 10 } };
            int* p { ptr.release() };
            std::cout << "*p = " << *p << std::endl;
            std::cout << "ptr.get() = " << ptr.get() << std::endl;
            delete p;
        */

        /*
            // make_unique of UniquePtr test 12
            std::cout << "******** make_unique of UniquePtr test ********" << std::endl;
            int a { 10 };
            UniquePtr<int> ptr2 { make_unique<int>(a) };
            std::cout << "ptr2.get() = " << ptr2.get() << std::endl;
            std::cout << "*ptr2.get() = " << *ptr2.get() << std::endl;
        */

        ////////////////////////////////////////////////
        /*
            // Constructor of SharedPtr test 13
            std::cout << "******** Constructor of SharedPtr test ********" << std::endl;
            SharedPtr<int> ptr1 { new int { 10 } };
            std::cout << "ptr1.get() = " << ptr1.get() << std::endl;
            std::cout << "*ptr1.get() = " << *ptr1.get() << std::endl;
        */

        /*
        // Default constructor of SharedPtr test 14
            std::cout << "******** Default constructor of SharedPtr test ********" << std::endl;
            SharedPtr<int> ptr2;
            std::cout << "ptr2.get() = " << ptr2.get() << std::endl;
            std::cout << "*ptr2.get() = " << *ptr2.get() << std::endl; // Segmentation fault (nullptr)
        */

        /*
            // make_shared() function of SharedPtr test 15
            std::cout << "******** make_shared() function of SharedPtr test ********" << std::endl;
            SharedPtr<int> ptr3 { make_shared<int>(12) };
            std::cout << "ptr3.get() = " << ptr3.get() << std::endl;
            std::cout << "*ptr3.get() = " << *ptr3.get() << std::endl;
        */

        /*
            // Copy constructor of SharedPtr test 16
            std::cout << "******** Copy constructor of SharedPtr test ********" << std::endl;
            SharedPtr<int> ptr1 { new int { 10 } };
            SharedPtr<int> ptr2 { ptr1 };
            std::cout << "ptr1.get() = " << ptr1.get() << std::endl;
            std::cout << "*ptr1.get() = " << *ptr1.get() << std::endl;
            std::cout << "ptr2.get() = " << ptr2.get() << std::endl;
            std::cout << "*ptr2.get() = " << *ptr2.get() << std::endl;
        */

        /*
            // Operator= of SharedPtr test 17
            std::cout << "******** Operator= of SharedPtr test ********" << std::endl;
            SharedPtr<int> ptr1 { new int { 10 } };
            SharedPtr<int> ptr2 { new int { 11 } };
            ptr2 = ptr1;
            std::cout << "ptr1.get() = " << ptr1.get() << std::endl;
            std::cout << "*ptr1.get() = " << *ptr1.get() << std::endl;
            std::cout << "ptr2.get() = " << ptr2.get() << std::endl;
            std::cout << "*ptr2.get() = " << *ptr2.get() << std::endl;
        */

    //    /*

        // use_count member function of SharedPtr test 18
        std::cout << "******** use_count member function of SharedPtr test ********" << std::endl;
        SharedPtr<int> ptr1 { new int { 10 } };
        std::cout << "ptr1.use_count() = " << ptr1.use_count() << std::endl;
        SharedPtr<int> ptr2 { ptr1 };
        std::cout << "ptr1.use_count() = " << ptr1.use_count() << std::endl;
        std::cout << "ptr2.use_count() = " << ptr2.use_count() << std::endl;
        // */

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