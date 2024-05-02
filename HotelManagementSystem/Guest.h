#ifndef GUEST_H
#define GUEST_H

#include <string>
#include "Booking.h"
#include "Room.h"

class Booking; // Forward declaration

class Guest {
private:
    std::string name;
    std::string contactInfo;
    Booking* bookingDetails; // Using a pointer to Booking instead of the object directly
    std::string specialRequests;

public:
    Guest(std::string _name, std::string _contactInfo);

    std::string getName() const;
    void setName(std::string _name);

    std::string getContactInfo() const;
    void setContactInfo(std::string _contactInfo);

    Booking* getBookingDetails() const; // Returning a pointer to Booking instead of the object directly
    void setBookingDetails(Booking* _bookingDetails); // Using a pointer to Booking instead of the object directly

    std::string getSpecialRequests() const;
    void setSpecialRequests(std::string _specialRequests);

    void makeBooking(Guest _guest, Room _room, std::string _bookingDates, std::string _additionalRequests);
    void updateContactInfo(std::string newContactInfo);
    void updateSpecialRequests(std::string newRequests);
};

#endif /* GUEST_H */
