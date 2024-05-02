#ifndef HOTELMANAGEMENTSYSTEM_H
#define HOTELMANAGEMENTSYSTEM_H

#include <iostream>
#include <vector>
#include "Room.h"
#include "Guest.h"
#include "Booking.h"

class HotelSystem {
protected:
    std::vector<Room> rooms;
    std::vector<Guest> guests;
    std::vector<Booking> bookings;

public:
    // Abstract base class with virtual functions
    virtual double calculateRevenue() = 0;
    virtual void generateRevenueReport() = 0;
    virtual void checkInGuest(Guest guest, Room room, std::string bookingDates, std::string additionalRequests) = 0;
    virtual void checkOutGuest(Guest guest) = 0;
    virtual void handleGuestInteraction(Guest guest, std::string interaction) = 0;
    virtual void saveToFile(std::string filename) = 0;
    virtual void loadFromFile(std::string filename) = 0;
};

#endif //HOTELMANAGEMENTSYSTEM_H
