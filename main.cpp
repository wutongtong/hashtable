//
//  main.cpp
//  hashtable
//
//  Created by 吴桐 on 16/4/15.
//  Copyright © 2016年 吴桐. All rights reserved.
//

#include <iostream>
#include <string>
#include "hash.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
    
    Hash Hashy;
    string name = "";
    
    Hashy.AddItem("wutong", "beer");
    Hashy.AddItem("sunsining", "wine");

//    Hashy.PrintItemsInIndex(0);
//    while(name != "exit"){
//        cout << "Search for ";
//        cin >> name;
//        if(name != "exit"){
//            Hashy.FindDrink(name);
//        }
//    }
    Hashy.PrintTable();
    while(name != "exit"){
        cout << "Remove ";
        cin >> name;
        if(name != "exit"){
            Hashy.RemoveItem(name);
        }
    }
    
    Hashy.PrintTable();
    
    return 0;
}
