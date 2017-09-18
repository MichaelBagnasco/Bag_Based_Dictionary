//
//  dictionary.h
//  Bag_Based_Dictionary
//
//  Created by Mikey on 9/17/17.
//  Copyright © 2017 Michael Bagnasco. All rights reserved.
//

#include "dictionaryADT.h"
#include "bag.h"

#ifndef dictionary_h
#define dictionary_h

template <typename Key, typename E>
class  dictionary: public Dictionary<Key, E> {
    bag<KVpair<Key, E>> theBag;
    KVpair<Key, E> temp;
public:
    dictionary() {}          // Default constructor
    virtual ~dictionary() {} // Base destructor
    
    // Reinitialize dictionary
    virtual void clear()
    {
        
    }
    
    // Insert a record
    // k: The key for the record being inserted.
    // e: The record being inserted.
    // Return true if insert is successful and false otherwise
    virtual bool insert(const Key& k, const E& e)
    {
        
    }
    
    // Looks for a record using the key and if found does the following:
    // - updates the E& rtnVal
    // - removes the record from the dictionary
    // - returns true
    // If the record is not found the function returns false.
    virtual bool remove(const Key& k, E& rtnVal)
    {
        
    }
    
    // Takes an arbitrary record from the dictionary and does the following:
    // - updates the E& returnValue
    // - removes the record from the dictionary
    // - returns true
    // If the dictionary is empty the function returns false.
    virtual bool removeAny(E& returnValue)
    {
        
    }
    
    // Looks for a record using the key and if found does the following:
    // - updates the E& returnValue
    // - returns true
    // If the record is not found the function returns false.
    virtual bool find(const Key& k, E& returnValue) const
    {
        
    }
    
    // Return the number of records in the dictionary.
    virtual int size()
    {
        
    }
};

#endif /* dictionary_h */
