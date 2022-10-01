//
// Created by Khanh Nguyen on 9/29/22.
//

#ifndef CH9_NUM6_DYNAMIC_ARRAYS_FUNCTIONS_H
#define CH9_NUM6_DYNAMIC_ARRAYS_FUNCTIONS_H

std::string * createArray();
std::string* addEntry(std::string * &dynamicArray, int &size, std::string newEntry);
std::string* deleteEntry(std::string * &dynamicArray, int &size, std::string entryToDelete);

#endif //CH9_NUM6_DYNAMIC_ARRAYS_FUNCTIONS_H
