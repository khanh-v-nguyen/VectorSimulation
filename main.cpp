#include <iostream>
#include "functions.h"

int main() {
    int size = 5;
    std::string * dynamicArray = createArray();
    addEntry(dynamicArray, size, "sara");
    addEntry(dynamicArray, size, "rex");
    addEntry(dynamicArray, size, "jerry");
    deleteEntry(dynamicArray, size, "cindy");
    deleteEntry(dynamicArray, size, "jimin");
    deleteEntry(dynamicArray, size, "jimin");

    for(int i = 0;  i < size; i++)
    {
        std::cout << dynamicArray[i] << " ";
    }





}
