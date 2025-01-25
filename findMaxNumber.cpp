#include <iostream>

int findMaxNum(int* arr, size_t size);

int main()
{
    int arr[] = {1, 4, 2423, 412, 32415, 234, 4124, 32, 4};
    
    size_t arrSize = sizeof(arr);
    size_t elementSize = sizeof(arr[0]);
    size_t numOfElements = arrSize / elementSize;
    
    std::cout << findMaxNum(arr, numOfElements) << std::endl;
    
    return 0;
}

int findMaxNum(int* arr, size_t size)
{
    int maxNum = 0;
    
    if (size == 0)
    {
        return 0;
    }
    
    for (size_t i = 0; i < size; i++)
    {
        if (*(arr + i) > maxNum)
        {
            maxNum = *(arr + i);
        }
    }
    
    return maxNum;
}
