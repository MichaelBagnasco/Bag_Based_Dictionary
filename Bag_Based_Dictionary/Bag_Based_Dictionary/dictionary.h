//
//  dictionary.h
//  Bag_Based_Dictionary
//
//  Created by Mikey on 9/17/17.
//  Copyright © 2017 Michael Bagnasco. All rights reserved.
//

#include "dictionaryADT.h"
#include "bag.h"
#include <ctime>

#ifndef dictionary_h
#define dictionary_h

template <typename Key, typename E>
class  dictionary: public Dictionary<Key, E> {
    bag<KVpair<Key, E>> theBag;
    
public:
    dictionary() {}          // Default constructor
    ~dictionary() {} // Base destructor
    
    // Reinitialize dictionary
    void clear()
    {
        
    }
    
    // Insert a record
    // k: The key for the record being inserted.
    // e: The record being inserted.
    // Return true if insert is successful and false otherwise
    bool insert(const Key& k, const E& e)
    {
        KVpair<Key, E> temp(k,e);
        theBag.addItem(temp);
    }
    
    // Looks for a record using the key and if found does the following:
    // - updates the E& rtnVal
    // - removes the record from the dictionary
    // - returns true
    // If the record is not found the function returns false.
    bool remove(const Key& k, E& rtnVal)
    {
        KVpair<Key, E> temp(k,rtnVal);
        if (theBag.remove(temp)) {
            rtnVal = temp.value();
            return true;
        }
        else
            return false;
    }
    
    // Takes an arbitrary record from the dictionary and does the following:
    // - updates the E& returnValue
    // - removes the record from the dictionary
    // - returns true
    // If the dictionary is empty the function returns false.
    bool removeAny(E& returnValue)
    {
        srand(time(0));
        int random = rand() % 10;
        
    }
    
    // Looks for a record using the key and if found does the following:
    // - updates the E& returnValue
    // - returns true
    // If the record is not found the function returns false.
    bool find(const Key& k, E& returnValue) const
    {
        
    }
    
    // Return the number of records in the dictionary.
    int size()
    {
        
    }
};

#endif /* dictionary_h */
