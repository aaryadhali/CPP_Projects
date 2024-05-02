#ifndef BOOKING_H
#define BOOKING_H

#include <string>
#include "Guest.h"
#include "Room.h"

class Booking {
private:
    Guest guest;
    Room& room; // Use reference to Room instead of Room directly
    std::string bookingDates;
    std::string additionalRequests;

public:
    Booking(Guest _guest, Room& _room, std::string _bookingDates, std::string _additionalRequests);

    Guest getGuest() const;
    void setGuest(Guest _guest);

    const Room& getRoom() const; // Return reference to Room
    void setRoom(Room& _room); // Use reference to Room instead of Room directly

    std::string getBookingDates() const;
    void setBookingDates(std::string bookingDates);

    std::string getAdditionalRequests() const;
    void setAdditionalRequests(std::string additionalRequests);

    void cancelBooking();
    void updateDates(std::string newDates);
    void updateRequests(std::string newRequests);
};

#endif /* BOOKING_H */
