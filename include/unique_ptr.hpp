/**
 * @file unique_ptr.hpp
 * @author Erfan Rasti (erfanrasty@gmail.com)
 * @brief This is the header content for UniquePtr class
 * @version 1.1.1
 * @date 2022-05-05
 *
 * @copyright Copyright (c) 2022
 *
 */

// Debug section

/*
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
*/

template <typename T>
UniquePtr<T>::UniquePtr()
    : _p { nullptr }
{
    /**
     * @brief Default constructor
     *
     * @tparam T
     * @return UniquePtr<T>
     * @post _p is nullptr
     */

    // DEBUG_MSG("UniquePtr " << typeid(T).name() << " default constructor called");
}

template <typename T>
UniquePtr<T>::UniquePtr(T* __p)
    : _p { __p }
{
    /**
     * @brief Constructor
     *
     * @param __p
     * @tparam T
     * @return UniquePtr<T>
     * @post _p is not nullptr
     */

    // DEBUG_MSG("UniquePtr " << typeid(T).name() << " constructor called");
}

template <typename T>
UniquePtr<T>::~UniquePtr()
{
    /**
     * @brief Destructor
     *
     * @tparam T
     * @return void
     * @post _p is nullptr
     */

    // DEBUG_MSG("UniquePtr " << typeid(T).name() << " destructor called");
    delete _p;
    _p = nullptr;
}

template <typename T>
T& UniquePtr<T>::operator*() const
{
    /**
     * @brief Overload the * operator
     *
     * @tparam T
     * @return T
     */

    // DEBUG_MSG("UniquePtr " << typeid(T).name() << " * operator called");

    return *_p;
}

template <typename T>
T* UniquePtr<T>::operator->() const
{
    /**
     * @brief Overload the -> operator
     *
     * @tparam T
     * @return T*
     */

    // DEBUG_MSG("UniquePtr " << typeid(T).name() << " -> operator called");

    return _p;
}

template <typename T>
UniquePtr<T>::operator bool() const
{
    /**
     * @brief Overload the bool operator
     *
     * @tparam T
     * @return bool
     */

    // DEBUG_MSG("UniquePtr " << typeid(T).name() << " bool operator called");

    return _p != nullptr;
}

template <typename T>
T* UniquePtr<T>::get() const
{
    /**
     * @brief Get the pointer
     *
     * @return T*
     * @tparam T
     */

    // DEBUG_MSG("UniquePtr " << typeid(T).name() << " get member function called");

    return _p;
}

template <typename T>
void UniquePtr<T>::reset()
{
    /**
     * @brief Reset the pointer and delete the object
     *
     * @tparam T
     * @return void
     */

    // DEBUG_MSG("UniquePtr " << typeid(T).name() << " reset member function called");

    delete _p;
    _p = nullptr;
}

template <typename T>
void UniquePtr<T>::reset(T* __p)
{
    /**
     * @brief Reset the pointer and create a new object
     *
     * @param __p
     * @tparam T
     * @return void
     */

    // DEBUG_MSG("UniquePtr " << typeid(T).name() << " reset member function with new object called");

    delete _p;
    _p = __p;
}

template <typename T>
T* UniquePtr<T>::release()
{
    /**
     * @brief Release the pointer
     *
     * @tparam T
     * @return T*
     */

    // DEBUG_MSG("UniquePtr " << typeid(T).name() << " release member function called");

    T* temp { _p };
    _p = nullptr;

    return temp;
}

template <typename T>
T* make_unique(T value)
{
    /**
     * @brief Create a unique pointer
     *
     * @param value
     * @tparam T
     * @return T*
     */
    // DEBUG_MSG("make_unique " << typeid(T).name() << " function called");

    return new T { value };
}
