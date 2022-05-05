/**
 * @file shared_ptr.hpp
 * @author Erfan Rasti (erfanrasty@gmail.com)
 * @brief This is the header content for SharedPtr class
 * @version 1.1.2
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
SharedPtr<T>::SharedPtr()
    : _p { nullptr }
    , _count { new int { 0 } }
{
    /**
     * @brief Default constructor
     *
     * @tparam T
     * @return SharedPtr<T>
     * @post _p is nullptr
     */

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " default constructor called"
    //                        << " *_count: " << *_count);
}

template <typename T>
SharedPtr<T>::SharedPtr(T* __p)
    : _p { __p }
    , _count { new int { 1 } }
{
    /**
     * @brief Constructor
     *
     * @param __p
     * @tparam T
     * @return SharedPtr<T>
     * @post _p is not nullptr
     */

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " constructor called"
    //                        << " *_count: " << *_count);
}

template <typename T>
SharedPtr<T>::SharedPtr(const SharedPtr& sPtr)
    : _p { sPtr._p }
    , _count { sPtr._count }
{
    /**
     * @brief Copy constructor
     *
     * @param sPtr
     * @tparam T
     * @return SharedPtr<T>
     * @post _p is not nullptr
     */

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " copy constructor called"
    //                        << " *_count: " << *_count);

    ++(*_count);
}

template <typename T>
SharedPtr<T>::~SharedPtr()
{
    /**
     * @brief Destructor
     *
     * @tparam T
     * @return void
     * @post _p is nullptr
     */

    if (_p != nullptr) {

        // DEBUG_MSG("SharedPtr " << typeid(T).name() << " destructor called"
        //                        << " *_count: " << *_count);

        if (--(*_count) == 0) {
            delete _p;
            delete _count;
        }
        _p = nullptr;
        _count = nullptr;
    }
}

template <typename T>
SharedPtr<T>& SharedPtr<T>::operator=(const SharedPtr& sPtr)
{
    /**
     * @brief Assignment operator
     *
     * @param sPtr
     * @tparam T
     * @return SharedPtr<T>
     * @post _p is not nullptr
     */

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " assignment operator called"
    //                        << " *_count: " << *_count);
    if (this != &sPtr) {
        _count = sPtr._count;
        ++(*_count);
        _p = sPtr._p;
    }

    return *this;
}

template <typename T>
T& SharedPtr<T>::operator*() const
{
    /**
     * @brief Overload the * operator
     *
     * @tparam T
     * @return T
     */

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " * operator called"
    //                        << " *_count: " << *_count);

    return *_p;
}

template <typename T>
T* SharedPtr<T>::operator->() const
{
    /**
     * @brief Overload the -> operator
     *
     * @tparam T
     * @return T*
     */

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " -> operator called"
    //                        << " *_count: " << *_count);

    return _p;
}

template <typename T>
SharedPtr<T>::operator bool() const
{
    /**
     * @brief Overload the bool operator
     *
     * @tparam T
     * @return bool
     */

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " bool operator called"
    //                        << " *_count: " << *_count);

    return _p != nullptr;
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

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " getter called"
    //                        << " *_count: " << *_count);

    return _p;
}

template <typename T>
int SharedPtr<T>::use_count() const
{
    /**
     * @brief Getter for _count
     *
     * @tparam T
     * @return int
     * @post _count is not nullptr
     */

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " use_count called"
    //                        << " *_count: " << *_count);

    if (_count == nullptr)
        return 0;

    return *_count;
}

template <typename T>
void SharedPtr<T>::reset()
{
    /**
     * @brief Reset the _p and _count
     *
     * @tparam T
     * @return void
     * @post _p is nullptr
     */

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " reset called"
    //                        << " *_count: " << *_count);

    delete _p;
    _p = nullptr;
    (*_count) = 0;
}

template <typename T>
void SharedPtr<T>::reset(T* __p)
{
    /**
     * @brief Reset the _p and _count
     *
     * @param __p
     * @tparam T
     * @return void
     * @post _p is not nullptr
     */

    // DEBUG_MSG("SharedPtr " << typeid(T).name() << " reset called"
    //                        << " *_count: " << *_count);

    delete _p;
    _p = __p;
    (*_count) = 1;
}

template <typename T>
T* make_shared(T value)
{
    /**
     * @brief Make shared pointer
     *
     * @param __p
     * @tparam T
     * @return SharedPtr<T>
     * @post _p is not nullptr
     */

    // DEBUG_MSG("make_shared " << typeid(T).name() << " called");

    return new T { value };
}