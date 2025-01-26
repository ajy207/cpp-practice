/* This program was written to practice
*  character manipulation using pointers.
*/
 
#include <iostream>
#include <cstring>

// reverseString() prototype
bool reverseString(char* str);


/* Initializes a cstring or array of characters, then calls the
*  reverseString() function to attempt to reverse the cstring.
*  Return codes: 0; program executed successfully
*                1; program executed unsuccessfully
*/
int main()
{
    // char arrayOfChars[1] = {'/0'}; Debug statement for error handling test
    char arrayOfChars[] = "Hello, world!"; //Initializes the cstring
    
    std::cout << "Initial string:  " << arrayOfChars << std::endl; //Prints the original cstring
    
    std::cout << "Attempting to reverse string..." << std::endl; //Prints message indicating attempt to reverse the cstring
    
    if (reverseString(arrayOfChars)) //Calls reverseString() to reverse the cstring
    {
        std::cout << "String reversed successfully." << std::endl; //Prints success message
        std::cout << "Reversed string: " << arrayOfChars << std::endl; //Prints the reversed cstring
    }
    else
    {
        std::cout << "Error: empty string. No string to reverse." << std::endl; //Prints error if empty cstring
        return 1; //Returns error code 1 if the string reversal was unsuccessful
    }
    
    return 0; //Returns 0 if program has executed successfully
}

/*  Args:   char* str
*   Return: true if string is reversible,
*           false if empty cstring is passed
*
*   Uses pointer manipulation to reverse
*   the order of the passed cstring.
*/
bool reverseString(char* str)
{
    size_t length = strlen(str); //Computes length of cstring
    
    if (length < 1) //Returns false if empty cstring
    {
        char* start = str;                 //Pointer as placeholder for char swapping
        char* end   = str + length - 1;    //Pointer to character preceding the null termination for char swapping
        char temp   = *str;                //Initialize a char placeholder for swapping
        //int iteration = 0; Debug statement
        
        while (start < end) //Loop until middle or two middle chars have been swapped
        {
            //std::cout << "Iteration " << iteration << std::endl; Debug statement
            temp   = *start;   //Placehold starting char
            //std::cout << "Temp: " << temp << std::endl; Debug statement
            *start = *end;     //Assign deferenced end
            //std::cout << "Temp: " << *start << std::endl; Debug statement
            *end   = temp;     //Assign deferenced start
            //std::cout << "Temp: " << *end << std::endl; Debug statement
            
            start++;    //Shift pointer forward in memory
            end--;      //Shift pointer back in memory
        }
        
        return true;
    }
    
    return false;
}
