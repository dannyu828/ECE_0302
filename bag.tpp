#include "bag.hpp"

#include <vector>

// empty implementation                                                                                                     

template <typename T> Bag<T>::Bag() {
}

template <typename T> Bag<T>::~Bag() {
}

template <typename T> std::size_t Bag<T>::getCurrentSize() const {
    return inside.size();
}

template <typename T> bool Bag<T>::isEmpty() const {
    if (inside.size() == 0)
        return false;
    else
        return true;
}

template <typename T> bool Bag<T>::add(const T& entry) {
    inside.push_back(T);
    return false;
}

template <typename T> bool Bag<T>::remove(const T& entry) {
    inside.pop_back();
    return false;
}

template <typename T> void Bag<T>::clear() {
    inside.erase();
}

template <typename T> std::size_t Bag<T>::getFrequencyOf(const T& entry) const {
    int freq = 0;

    for (int i = 0; i < inside.size(); i++) {
        if (inside(i) == T) {
            freq++;
        }
    }

    return freq;
}

template <typename T> bool Bag<T>::contains(const T& entry) const {
    if (getFrequencyOf == 0)
        return false;
    else
        return true;
}

