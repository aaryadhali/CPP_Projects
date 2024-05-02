//
// Created by aarya_yoga on 5/1/2024.
//
#ifndef GUEST_H
#define GUEST_H

#include <string>
#include "Booking.h"
#include "Room.h"
#include "HotelSystem.h"


class Guest:public HotelSystem{
private:
    std::string name;
    std::string contactInfo;
    Booking bookingDetails;
    std::string specialRequests;

public:
    //Guest(std::string name, std::string contactInfo, Booking bookingDetails, std::string specialRequests);

    Guest(std::string name, std::string contactInfo);

    Guest(std::string &_name, std::string contactInfo, Booking &_bookingDetails, std::string &_specialRequests);

    std::string getName() const;
    void setName(std::string name);

    std::string getContactInfo() const;
    void setContactInfo(std::string contactInfo);

    Booking getBookingDetails() const;
    void setBookingDetails(Booking &_bookingDetails);

    std::string getSpecialRequests() const;
    void setSpecialRequests(std::string specialRequests);

    void makeBooking(Guest &_guest, Room &_room, std::string &_bookingDates, std::string &_additionalRequests);
    void updateContactInfo(std::string newContactInfo);
    void updateSpecialRequests(std::string newRequests);
};

#endif /* GUEST_H */
