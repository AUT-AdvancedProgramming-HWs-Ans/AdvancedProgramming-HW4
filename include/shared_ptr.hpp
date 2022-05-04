/**
 * @file shared_ptr.hpp
 * @author Erfan Rasti (erfanrasty@gmail.com)
 * @brief This is the header content for SharedPtr class
 * @version 1.0.4
 * @date 2022-05-05
 *
 * @copyright Copyright (c) 2022
 *
 */

// Debug section

#define DEBUG

#ifdef DEBUG
#define DEBUG_MSG(str)                 \
    do {                               \
        std::cout << str << std::endl; \
    } while (false)
#else
#define DEBUG_MSG(str) \
    do {               \
    } while (false)
#endif

template <typename T>
SharedPtr<T>::SharedPtr()
    : _p { nullptr }
{
    /**
     * @brief Default constructor
     *
     * @tparam T
     * @return SharedPtr<T>
     * @post _p is nullptr
     */

    DEBUG_MSG("SharedPtr " << typeid(T).name() << "default constructor called");
}

template <typename T>
SharedPtr<T>::SharedPtr(T* __p)
    : _p { __p }
{
    /**
     * @brief Constructor
     *
     * @param __p
     * @tparam T
     * @return SharedPtr<T>
     * @post _p is not nullptr
     */

    DEBUG_MSG("SharedPtr " << typeid(T).name() << " constructor called");
}

template <typename T>
T* SharedPtr<T>::get() const
{
    /**
     * @brief Getter for _p
     *
     * @tparam T
     * @return T*
     * @post _p is not nullptr
     */

    DEBUG_MSG("SharedPtr " << typeid(T).name() << " getter called");
    return _p;
}
