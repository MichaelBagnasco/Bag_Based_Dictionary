//
//  main.cpp
//  Bag_Based_Dictionary
//
//  Created by Mikey on 9/17/17.
//  Copyright © 2017 Michael Bagnasco. All rights reserved.
//

#include <iostream>
#include "dictionary.h"


int main() {
    // First Dictionary
    BDictionary<int, string> dict1;
    KVpair<int, string> temp;
    string removedValue,
    foundValue,
    input[] = {"Test", "your", "bag", "and", "dictionary", "implementations", "with", "the", "following", "template"};
    
    // Second Dictionary
    BDictionary<string, int> dict2;
    KVpair<string, int> temp2;
    int foundInt;
    string keyIn[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    
    
    
    cout << "Inserting sample data in a dictionary that can contain " << dict1.capacity() << " records." << endl;
    cout << "The inserted records are:" << endl;
    
    
    //Demonstrating Insert
    for (int i = 0; i != 10; i++) {
        dict1.insert(i, input[i]);
        cout << i << ": " << input[i] << endl;
    }
    cout << endl;
    
    
    //Demonstrating the functions
    cout << "There are currently " << dict1.size() << " records in the dictionary" << endl << endl;
    
    cout << "Removing the third record" << endl;
    dict1.remove(2, removedValue);
    cout << "Removed record: " << removedValue << endl << endl;
    
    cout << "Removing a random record" << endl;
    dict1.removeAny(removedValue);
    cout << "Removed Record: " << removedValue << endl << endl;
    
    cout << "Finding the fifth record without removing it" << endl;
    dict1.find(4, foundValue);
    cout << "The fifth record is: " << foundValue << endl << endl;
    
    cout << "The current amount of records in the dictionary is " << dict1.size() << endl << endl;
    
    cout << "Clearing the dictionary" << endl << endl << endl;
    dict1.clear();
    
    
    
    // Demonstrating the second dictionary
    cout << "Inserting sample data in a dictionary that can contain " << dict2.capacity() << " records." << endl;
    cout << "The inserted records are:" << endl;

    for (int i = 0; i != 10; i++) {
        dict2.insert(keyIn[i],i*10);
        cout << keyIn[i] << ": " << i*10 << endl;
    }
    cout << endl;
    
    cout << "Finding the 7th record" << endl;
    dict2.find("G", foundInt);
    cout << "The seventh record is: " << foundInt << endl << endl << endl;
    
    return 0;
}
