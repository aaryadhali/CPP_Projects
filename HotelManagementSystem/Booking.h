#ifndef BOOKING_H
#define BOOKING_H

#include <string>
#include "Guest.h"
#include "Room.h"
#include "HotelSystem.h"

class Booking{
private:
    Guest guest;
    Room room;
    std::string bookingDates;
    std::string additionalRequests;

public:
    Booking(Guest &_guest, Room &_room, std::string &_bookingDates, std::string &_additionalRequests);

    Guest getGuest() const;
    void setGuest(Guest &_guest);

    Room getRoom() const;
    void setRoom(Room &_room);

    std::string getBookingDates() const;
    void setBookingDates(std::string bookingDates);

    std::string getAdditionalRequests() const;
    void setAdditionalRequests(std::string additionalRequests);

    void cancelBooking();
    void updateDates(std::string newDates);
    void updateRequests(std::string newRequests);
};

#endif /* BOOKING_H */
