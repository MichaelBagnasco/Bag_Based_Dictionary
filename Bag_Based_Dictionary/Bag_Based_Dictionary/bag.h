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

template <typename E>
class bag: public Bag<E>
{
public:
    bag() {}            // base constructor
    ~bag() {}   // base destructor
    
    // Insert a new item into the bag -- return false if fails and true if
    // successful
    bool addItem(const E& item)
    {
        
    }
    
    // Looks for 'item' in the bag and if found updates 'item' with the
    // bag value and returns true.  Otherwise 'item' is left unchanged
    // and the method returns false.
    bool remove(E& item)
    {
        
    }
    
    // Removes the top record from the bag, puts it in returnValue, and
    // returns true if the bag is not empty.  If the bag is empty the
    // function returns false and returnValue remains unchanged.
    bool removeTop(E& returnValue)
    {
        
    }
    
    // Finds the record using returnValue and if the record is found updates
    // returnValue based on the contents of the bag and returns true.  If the
    // record is not found the function returns false.  Works just like remove()
    // except that the found record is not removed from the bag.
    bool find(E& returnValue) const
    {
        
    }
    
    // Inspect the top of the bag.  If the bag is empty return
    // false and leave 'item' unchanged; otherwise, return true and update
    // 'item' with the contents of the bag.
    bool inspectTop(E& item) const
    {
        
    }
    
    // empties the bag
    void emptyBag()
    {
        
    }
    
    // use the += operator to add an item to the bag
    bool operator+=(const E& addend)
    {
        
    }
    
    // get the size of the bag
    int size() const
    {
        
    }
    
    // get the capacity of the bag
    int bagCapacity() const
    {
        
    }
};

#endif /* bag_h */
