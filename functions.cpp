//
// Created by Khanh Nguyen on 9/29/22.
//

#include <iostream>
#include "functions.h"
std::string * createArray()
{
    std::string * dynamicArray = new std::string[5];
    *(dynamicArray+0) = "khanh";
    *(dynamicArray+1) = "tom";
    *(dynamicArray+2) = "cindy";
    *(dynamicArray+3) = "james";
    *(dynamicArray+4) = "jimin";
    return dynamicArray;
}

std::string* addEntry(std::string * &dynamicArray, int &size, std::string newEntry)
{
    size += 1;
    std::string * bigArray = new std::string[size];
    for(int i = 0; i < size; i++)
    {
        bigArray[i] = dynamicArray[i];
        bigArray[size-1] = newEntry;
    }
    delete []dynamicArray;
    dynamicArray = bigArray;
    return dynamicArray;
}

std::string* deleteEntry(std::string * &dynamicArray, int &size, std::string entryToDelete) {
    bool exist = false;
    int count = 0;
    std::string *newArray = new std::string[size];
    //for loop to check if entryToDelete exists
    for (int i = 0; i < size; i++)
    {
        if (*(dynamicArray+i) == entryToDelete)
        {
            exist = true;
        }
    }
    //for loop to delete entryToDelete if exist = true, otherwise return the original dynamic array
    if (exist == true)
    {
        for (int i = 0; i < size; i++)
        {
            if(*(dynamicArray+i) != entryToDelete)
            {
                newArray[count++] = *(dynamicArray+i);
            }
        }
        size -= 1;
    }
    else
    {
        return dynamicArray;
    }
    delete []dynamicArray;
    dynamicArray = newArray;
    return dynamicArray;
}