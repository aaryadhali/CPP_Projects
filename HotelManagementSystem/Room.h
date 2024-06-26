#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room {
private:
    int roomNumber;
    std::string type;
    bool availability;
    double price;
    std::string amenities;

public:
    Room(int roomNumber, std::string type, double price, std::string amenities);

    // Getters
    int getRoomNumber() const;
    std::string getType() const;
    bool isAvailable() const;
    double getPrice() const;
    std::string getAmenities() const;

    // Setters
    void setRoomNumber(int roomNumber);
    void setType(std::string type);
    void setAvailability(bool availability);
    void setPrice(double price);
    void setAmenities(std::string amenities);

    // Other functions
    void bookRoom();
    void checkAvailability();
    void updatePrice(double newPrice);
    void updateAmenities(std::string newAmenities);
};

#endif /* ROOM_H */




