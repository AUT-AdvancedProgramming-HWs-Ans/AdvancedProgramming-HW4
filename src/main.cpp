/**
 * @file main.cpp
 * @author Erfan Rasti (erfanrasty@gmail.com)
 * @brief This is the main file for testing UniquePtr class
 * @version 1.0.1
 * @date 2022-05-03
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

        // Constructor tests
        // UniquePtr<int> ptr1 { nullptr };
        // std::cout << "ptr1.get() = " << ptr1.get() << std::endl;
        // std::cout << "*ptr1.get() = " << *ptr1.get() << std::endl;

        // make_unique tests
        // int a { 10 };
        // UniquePtr<int> ptr2 { make_unique<int>(a) };
        // std::cout << "ptr2.get() = " << ptr2.get() << std::endl;
        // std::cout << "*ptr2.get() = " << *ptr2.get() << std::endl;

        // Default constructor tests
        // UniquePtr<int> ptr3;
        // std::cout << "ptr3.get() = " << ptr3.get() << std::endl;
        // std::cout << "*ptr3.get() = " << *ptr3.get() << std::endl;

        // Destructor tests
        // UniquePtr<int> ptr4 { new int{10} };
        // std::cout << "ptr4.get() = " << ptr4.get() << std::endl;
        // std::cout << "*ptr4.get() = " << *ptr4.get() << std::endl;
        // ptr4.~UniquePtr();
        // std::cout << "ptr4.get() = " << ptr4.get() << std::endl;
        // std::cout << "*ptr4.get() = " << *ptr4.get() << std::endl;

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