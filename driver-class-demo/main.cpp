/**
 * @file main.cpp
 * @brief Main function demonstrating the use of getters and setters for a Driver class
 * @author ajy207
 * @date 2024-01-26
 */
#include <iostream>
#include "Driver.h"
#include <string>

/**
 * This main function performs the following operations:
 * 1. Creates a Driver object with initial values
 * 2. Retrieves and displays initial attributes using getter methods
 * 3. Modifies the Driver object's attributes using setter methods
 * 4. Retrieves and displays the updated attribute values
 *
 * Note, the data in this program does not represent a real person.
 * The addresses point to restaurants I have worked in during my tenure
 * as a sous chef / line cook.
 *
 * @return int Returns 0 upon successful execution
 */
int main()
{
    // Create a Driver object
    Driver restaurantDriver("John", "Doe", "1969-04-20", 12592839, "1001 Pennsylvania Avenue NW, Washington, DC 20004");
    
    // Get member attributes of the Driver object and print to console
    std::cout << "First Name: " << restaurantDriver.getFirstName() << std::endl;
    std::cout << "Last Name: " << restaurantDriver.getLastName() << std::endl;
    std::cout << "DOB: " << restaurantDriver.getDateOfBirth() << std::endl;
    std::cout << "License Number: " << restaurantDriver.getLicenseNumber() << std::endl;
    std::cout << "Address: " << restaurantDriver.getAddress() << std::endl;
    
    std::cout <<  "--------------------------------------------" << std::endl;
    
    std::cout << "Performing mutations using SETTERS... " << std::endl;
    
    std::cout <<  "--------------------------------------------" << std::endl;
    
    // Set new member attributes
    restaurantDriver.setAddress("1090 I St NW, Washington, DC 20001");
    restaurantDriver.setLastName("Momofuku");
    restaurantDriver.setFirstName("CCDC");
    restaurantDriver.setLicenseNumber(12430958);
    restaurantDriver.setDateOfBirth("1988-02-14");
    
    // Print new member attributes
    std::cout << "First Name: " << restaurantDriver.getFirstName() << std::endl;
    std::cout << "Last Name: " << restaurantDriver.getLastName() << std::endl;
    std::cout << "DOB: " << restaurantDriver.getDateOfBirth() << std::endl;
    std::cout << "License Number: " << restaurantDriver.getLicenseNumber() << std::endl;
    std::cout << "Address: " << restaurantDriver.getAddress() << std::endl;
    
    return 0;
}
