/**
 * @file Driver.cpp
 * @brief Implementation of the Driver class
 * @author ajy207
 * @date 2025-01-26
 */

#include "Driver.h"
#include <string>

//Constructor
Driver::Driver
    (const std::string& driverFirstName,
     const std::string& driverLastName,
     const std::string& driverDateOfBirth,
     int driverLicenseNumber,
     const std::string& driverAddress):
      firstName(driverFirstName),
      lastName(driverLastName),
      dateOfBirth(driverDateOfBirth),
      licenseNumber(driverLicenseNumber),
      address(driverAddress)
{
    // Initialization done in the initializer list
}

// Getter implementations
std::string Driver::getFirstName() const
{
    return firstName;
}

std::string Driver::getLastName() const
{
    return lastName;
}

std::string Driver::getDateOfBirth() const
{
    return dateOfBirth;
}

int Driver::getLicenseNumber() const
{
    return licenseNumber;
}

std::string Driver::getAddress() const
{
    return address;
}


// Setter implementations
void Driver::setFirstName(const std::string& newFirstName)
{
    firstName = newFirstName;
}

void Driver::setLastName(const std::string& newLastName)
{
    lastName = newLastName;
}

void Driver::setDateOfBirth(const std::string& newDateOfBirth)
{
    dateOfBirth = newDateOfBirth;
}

void Driver::setLicenseNumber(int newLicenseNumber)
{
    licenseNumber = newLicenseNumber;
}

void Driver::setAddress(const std::string& newAddress)
{
    address = newAddress;
}
