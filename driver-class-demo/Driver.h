#ifndef DRIVER_H
#define DRIVER_H
#include <string>

/**
 * @class Driver
 * @brief Represents a driver with generic information
 * @author ajy207
 * @date 2025-01-26
 *
 * This class stores and manages information about a driver:
 * firstName, lastName, dateOfBirth, licenseNumber, address
 */
class Driver
{
    
private:
    std::string firstName;
    std::string lastName;
    std::string dateOfBirth;
    int licenseNumber;
    std::string address;
  
//Constructor declaration
public:
    /**
     * @brief Construct a new Driver object
     * @param driverFirstName     The first name of the driver
     * @param driverLastName      The last name of the driver
     * @param driverDateOfBirth   The date of birth of the driver
     * @param driverLicenseNumber The license number of the driver
     * @param driverAddress       The address of the driver
     */
    Driver(const std::string& driverFirstName, const std::string& driverLastName, const std::string& driverDateOfBirth,
           int driverLicenseNumber, const std::string& driverAddress);
    
    //Getter prototypes
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getDateOfBirth() const;
    int getLicenseNumber() const;
    std::string getAddress() const;
    
    //Setter prototypes
    void setFirstName(const std::string& newFirstName);
    void setLastName(const std::string& newLastName);
    void setDateOfBirth(const std::string& newDateOfBirth);
    void setLicenseNumber(int newLicenseNumber);
    void setAddress(const std::string& newAddress);
};

#endif
