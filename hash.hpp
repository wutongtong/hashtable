//
//  hash.hpp
//  hashtable
//
//  Created by 吴桐 on 16/4/15.
//  Copyright © 2016年 吴桐. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

#include <stdio.h>

#ifndef hash_hpp
#define hash_hpp

class Hash{
private:
    static const int tableSize = 4;
    struct item{
        string name;
        string drink;
        item* next;
    };
    item* HashTable[tableSize];
public:
    Hash();
    int index_Hash(string key);//output the index;
    void AddItem(string name, string drink);
    int NumberOfItemsInIndex(int index);
    void PrintTable();
    void PrintItemsInIndex(int index);
    void FindDrink(string name);
    void RemoveItem(string name);
    
};








#endif /* hash_hpp */
