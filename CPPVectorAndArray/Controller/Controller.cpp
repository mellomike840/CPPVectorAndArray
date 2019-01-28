//
//  Controller.cpp
//  CPPVectorAndArray
//
//  Created by Rottlaender, Alex on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

#include <iostream>
#include <vector>
using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    cout << "Vectors in c++ are like java ArrayLists." << endl;
    
    //1.Create a Vector for ints, and one for strings
    
    vector<int> myIntVector (12); //12 zero-initialized ints
    
    for(int i = 0; i < myIntVector.size(); i++)
    {
        myIntVector.at(i) = i + 1;
    }
    
    vector<string> myStringVector (3);
    myStringVector.at(0) = "This is what is at the 0 index of my string vector.";
    myStringVector.at(1) = "This is what is at the 1 index of my string vector.";
    myStringVector.at(2) = "This is what is at the 2 index of my string vector.";
    
    
    //2. Use a for loop to output the values
    
    cout << "My Integer Vector has a size of " << myIntVector.size() << endl;
    cout << "These are it's values: " << endl;
    
    for(int i = 0; i < myIntVector.size(); i++)
    {
        cout << myIntVector.at(i) << endl;
    }
    
    
    cout << "Here are all the values in my string vector of size " << myStringVector.size() << endl;
    for(int i = 0; i < myStringVector.size(); i++)
    {
        cout << myIntVector.at(i) << endl;
    }
    
    //3.copy the vector string values into a string array
    string myStringArray[3];
    for(int i = 0; i < myStringVector.size(); i++)
    {
        myStringArray[i] = myStringVector.at(i);
    }
    
    
    
    
    
}

