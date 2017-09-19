//
//  bag.h
//  Bag_Based_Dictionary
//
//  Created by Mikey on 9/17/17.
//  Copyright © 2017 Michael Bagnasco. All rights reserved.
//
#include "bagADT.h"
#include "kvpair.h"
#include <string>

#ifndef bag_h
#define bag_h

template <typename E, typename Key, typename V>
class ABag: public Bag<E>
{
    KVpair<Key, V> pairArray[10];
    int top,
    current;
    const int arraySize = 10;
public:
    ABag() {top = current = -1;}            // base constructor
    ~ABag() {emptyBag();}   // base destructor
    
    // Insert a new item into the bag -- return false if fails and true if
    // successful
    bool addItem(const E& item)
    {
        if (top != 9) {
            pairArray[top] = item;
            top++;
            return true;
        }
        else
            return false;
    }
    
    // Looks for 'item' in the bag and if found updates 'item' with the
    // bag value and returns true.  Otherwise 'item' is left unchanged
    // and the method returns false.
    bool remove(E& item)
    {
        if (top != -1 && find(item)) {
            for (int i = current; i != top; i++) {
                pairArray[i] = pairArray[i+1];
            }
            top--;
            return true;
        }
        else
            return false;
    }
    
    // Removes the top record from the bag, puts it in returnValue, and
    // returns true if the bag is not empty.  If the bag is empty the
    // function returns false and returnValue remains unchanged.
    bool removeTop(E& returnValue)
    {
        if (top != -1) {
            returnValue = pairArray[top--];
            return true;
        }
        else
            return false;
    }
    
    // Finds the record using returnValue and if the record is found updates
    // returnValue based on the contents of the bag and returns true.  If the
    // record is not found the function returns false.  Works just like remove()
    // except that the found record is not removed from the bag.
    bool find(E& returnValue) const
    {
        if (top != -1) {
            for (int i = top; i != -1; i--) {
                if (pairArray[i] == returnValue) {
                    returnValue = pairArray[i];
                    return true;
                }
            }
            return false;
        }
        return false;
    }
    
    // Inspect the top of the bag.  If the bag is empty return
    // false and leave 'item' unchanged; otherwise, return true and update
    // 'item' with the contents of the bag.
    bool inspectTop(E& item) const
    {
        if (top == -1) {
            return false;
        }
        else{
            item = pairArray[top];
            return true;
        }
    }
    
    // empties the bag
    void emptyBag()
    {
        top = -1;
    }
    
    // use the += operator to add an item to the bag
    bool operator+=(const E& addend)
    {
        return addItem(addend);
    }
    
    // get the size of the bag
    int size() const
    {
        return top + 1;
    }
    
    // get the capacity of the bag
    int bagCapacity() const
    {
        return arraySize;
    }
    
    void setCurrent(int a)
    {
        current = a;
    }
    
    bool removeAtCurrent(E& rtnVal)
    {
        if (top != -1) {
            rtnVal = pairArray[current];
            for (int i = current; i != top; i++) {
                pairArray[i] = pairArray[i+1];
            }
            top--;
            return true;
        }
        else
            return false;
    }
};

#endif /* bag_h */
